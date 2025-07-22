/* 
Write a program which reads a single integer 0 < n < 20 as input and prints out a right-justified triangle. 
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

        for (int j = i; j < size - 1; j++){
            cout << " ";
        }
        for (int z = 0; z <= i; z++){
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