/*
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){

    int C;
    cin >> C; // number of test cases

    vector< vector<int> > arr(C);

    for (int i = 0; i < C; i++){

        int N; // number of people in the class
        int inputs; // final grades

        cin >> N;
        arr[i].push_back(N);

        for (int j = 1; j <= N; j++){

            cin >> inputs;
            arr[i].push_back(inputs);
        }
    }

    for (int i = 0; i < C; i++){

        double N = arr[i][0];

        double sum = 0; // sum of grades in data set

        double average = 0; // average in data set

        double count = 0; // count of people above average

        double percentage = 0; // percentage of people above the average

        for (int j = 1; j <= N; j++){

            sum += arr[i][j];

        }

        average = sum / N;

        for (int j = 1; j <= N; j++){

            if (arr[i][j] > average){
                count++;
                
            }

        }

        percentage = (count * 100) / N;

        cout << fixed << setprecision(3) << percentage << "%" << endl;
        
    }

}