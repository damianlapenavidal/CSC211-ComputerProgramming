// Write a program that reads in a string of characters and prints out True if the string is palindrome and False, otherwise. 
// A palindrome is a string that reads the same backward and forward. For example: Tacocat. Your program must not be case-sensitive. 
// Length of the input string: 1 <= n <= 100.

#include <iostream>
#include <cctype>
using namespace std;

bool verify(const string& s){

    int n = s.length();

    for (int i = 1; i <= n/2; i++){

        char left = tolower(s[i - 1]);
        char right = tolower(s[n - i]);

        if (left != right) {
            return false;
        }
    }
    return true;
}

int main(){

    string str;
    getline(cin, str);    

    if (verify(str)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

