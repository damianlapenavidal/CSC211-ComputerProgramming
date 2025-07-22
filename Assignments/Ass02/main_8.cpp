/* 
Write a program that reads in an integer 0 < n < 10 as input and prints out an X 
of that height made of * characters. If the input is not an odd number, it should 
print Sorry, not odd. See examples below for input values of n = 3 and n = 5 respectively.

* *
 *
* *
*   *
 * *
  *
 * *
*   *

*/

#include <iostream>
using namespace std;

void x_shape(int size){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i || j == (size - i - 1)) {
                cout << "*";
            } else if (j < (size - i - 1) || j < (i + 1)) {  
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
   
    int input;

    cin >> input;

    if(input % 2 != 0){
        x_shape(input);
    } else {
        cout << "Sorry, not odd";
    }
    
    return 0;
}