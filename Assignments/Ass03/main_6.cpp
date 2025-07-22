// Write a program that reads a string as input and prints its hash value. The hash value for this problem is defined 
// as the sum of all characters in the string, in fact, the sum of their ascii values. Length of the input string: 1 <= n <= 100.

#include <iostream>
using namespace std;

int main(){

    string str;
    getline(cin, str);
    int n = str.size();

    int result = 0;

    for (int i = 0; i < n; i++) {
        
        result += str[i];
    }

    cout << result;

    return 0;
}