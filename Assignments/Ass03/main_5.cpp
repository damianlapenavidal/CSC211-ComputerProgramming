// Write a program that reads an input string and removes all its consecutive duplicates. 
// For example, if the input string is Trrryyyyy             Agaiinnnn, the output should be Try Again. 
// Your program must be case-sensitive. Length of the input string: 1 <= n <= 100.

#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int n = str.size();

    string result;

    for (int i = 0; i < n; i++) {
        if (i == 0 || str[i] != str[i - 1]) {
            result += str[i];
        }
    }

    cout << result << endl;

    return 0;
}
