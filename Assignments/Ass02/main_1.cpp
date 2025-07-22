/* 
Write a program which reads a single integer 0 < n < 20 as input and prints out a left-justified triangle. 
For example, if n = 4, output would be:

*
**
***
****

*/

#include <iostream>
using namespace std;

void print_triangle(int size) {
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {

    int max;

    cin >> max;

    print_triangle(max);

    return 0;
}