// Write a program that reads a string of characters and prints out the number of unique characters in the array. 
// For example if the input is CSC 211 c++, the output should be 7, as there are 7 unique characters CS 21c+. 
// Length of the input string: 1 <= n <= 100.

#include <iostream>
using namespace std;

int main(){

    string str;
    getline(cin, str);

    string usedchar;
    
    for (int i = 0; i < str.size(); i++) {

        char letter = str[i];
        bool found = false;

        for (int j = 0; j < usedchar.size(); j++) {
            if (usedchar[j] == letter) {
                found = true;
                break;
            }
        }

        if (!found) {
            usedchar += letter;
        }
    }

    cout << usedchar.size();

    return 0;

}