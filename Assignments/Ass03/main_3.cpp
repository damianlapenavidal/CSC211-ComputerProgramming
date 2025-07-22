// Write a program which reads in a string of characters and prints out the same characters in reverse order. 
// For example, if the input is Alright, alright, alright, output must be thgirla ,thgirla ,thgirlA. 
// Note that your program must be case sensitive. Length of the input string: 1 <= n <= 100.

#include <iostream>
using namespace std;

int main(){

    string str;
    getline(cin, str);
    int n = str.length();

    int temp;

    for (int i = 1; i <= n/2; i++){

        temp = str[i-1];
        str[i-1] = str[n-i];
        str[n-i] = temp;
    }

    cout << str;

    return 0;
}