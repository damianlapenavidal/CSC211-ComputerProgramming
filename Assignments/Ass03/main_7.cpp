// Write a program that reads a sequence 2D points, and calculates the diameter, which is the largest 
// euclidean distance between any pair of such points. The input will be a sequence of x1 y1 x2 y2 ... xn yn integer values, 
// and the output must be an integer representing the floor of the diameter. The number of 2D points in the sequence can be 
// anything between 1 and 100 (inclusive).

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x[100], y[100];
    int count = 0;

    while (cin >> x[count] >> y[count]) {
        count++;
    }

    if (count < 2) {
        cout << 0 << endl;
        return 0;
    }

    double diameter = 0;

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            double dx = x[i] - x[j];
            double dy = y[i] - y[j];
            double distance = sqrt(dx * dx + dy * dy);

            if (distance > diameter) {
                diameter = distance;
            }
        }
    }

    cout << (int)diameter << endl;
    
}