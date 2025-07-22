/* 
Write a program that reads a single character 'A' <= ch <= 'Z' as input and 
prints out a pyramid of characters starting at A until it reaches the pyramid's 
base and stops. See examples below for input values of ch = 'A' and ch = 'C' respectively.

A
    A
  A B A
A B C B A

*/

#include <iostream>
using namespace std;

void printPyramid(char ch) {
    int rows = ch - 'A' + 1;

    for (int i = 0; i < rows; i++) {
        int spaces = (rows - i - 1) * 2;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Print left side of pyramid
        for (int j = 0; j <= i; j++) {
            if (j > 0) cout << " ";  // Only print space before the character, not after
            cout << (char)('A' + j);
        }

        // Print right side of pyramid
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << (char)('A' + j);
        }

        cout << endl;
    }
}

int main() {
    char ch;
    cin >> ch;

    printPyramid(ch);

    return 0;
}
