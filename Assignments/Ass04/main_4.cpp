/*
The Assignment
For the purpose of this assignment, we will be asking you to do a simplified version of the algorithm using 2D Cartesian points and Euclidean 
distance measurement to calculate closeness.

The Rules
Each point given will have a unique (x,y) coordinate.
Each point will be classified as either R for Red or B for Blue.
There will never be a tie as to what an object will be classified as.
Input
As input you will be given on the first line n and k followed by 1 <= n <= 100 lines each containing a pre-classified point. n is the number 
of pre-classified points given,  1 <= k <= n is the number of nearest neighbors you will use to classify your unknown point. Each of the 
pre-classified points will be represented on separate lines in the form x y c where x and y are the Cartesian coordinates of the point 
-100.0 <= x,y <= 100.0 and c is its label, either R or B. Finally on the last line you will receive, in the format x y, the Cartesian 
coordinates of the point which should be classified. For example:
Your Task
Once you have this information, you should find and record the point closest to point p (the unknown), then find the next closest point, etc. 
until you have found k points. Count how many times labels R and B were found, point p gets classified as whichever label occurred more.

*** Remember that the rules ensure one label will always occur more than the other.

Output
Your output should be a single char either R or B which your point p has been classified as.

10 3
3.57 -3.18 R
84.91 27.69 B
93.40 4.62 B
-67.87 9.71 B
75.77 82.35 B
-74.31 -69.48 R
39.22 31.71 R
-65.55 95.02 B
17.12 3.44 B
70.60 -43.87 R
25.60 -10.15
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    double x;
    double y;
    char color;
    double euclidean;
};

void eudistance (Point p1, Point& p2){
    double d1 = (p1.x - p2.x) * (p1.x - p2.x);
    double d2 = (p1.y - p2.y) * (p1.y - p2.y);
    p2.euclidean = sqrt(d1 + d2);
    return;
}

int main(){

    // Read first 2 inputs
    int n, k;
    cin >> n >> k;

    // Read input points and assign each value to struct Point
    vector<Point> points;
    double x, y;
    char label;

    for (int i = 0; i < n; i++) {
        Point p;
        cin >> x >> y >> label;
        p.x = x;
        p.y = y;
        p.color = label;
        points.push_back(p);
    }

    // Read input point to be classified
    Point unknown;
    cin >> x >> y;
    unknown.x = x;
    unknown.y = y;

    // Calculating euclidean distance bw the last point and every other one
    for (int i = 0; i < n; i++){
        eudistance(unknown, points[i]);
    }
    
    // Sort points in ascending eudistance order
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (points[j].euclidean < points[minIndex].euclidean) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(points[i], points[minIndex]);
        }
    }

    // Compare first k numbers of points
    int countR = 0, countB = 0;
    for (int i = 0; i < k; i++) {
        if (points[i].color == 'R') {
            countR++;
        } 
        else if (points[i].color == 'B') {
            countB++;
        }
    }

    // Output the most counted
    if (countR > countB) {
        cout << "R" << endl;
    } else {
        cout << "B" << endl;
    }

    return 0;
}