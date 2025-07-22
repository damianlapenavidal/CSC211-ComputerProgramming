/* 
Write a program that reads in an integer 0 < n <= 10^9 as input and checks 
whether n is an armstrong number or not. An armstrong number is a number that 
is equal to the sum of its own digits raised to the power of the number of digits. 
For example 1634 is an armstrong number, since 1^4 + 6^4 + 3^4 + 4^4 = 1634. 
Your program will print True if n is an armstrong number, and False otherwise.
*/

#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int n, int dig) {
    int sum = 0;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, dig);
        temp /= 10;
    }

    if (sum == n) {
        cout << "True";
    } else {
        cout << "False";
    }
}

int main() {
    int num;
    cin >> num;

    int digits = 0;
    int i = num;

    while (i > 0) {
        i /= 10;
        digits += 1;
    }

    armstrong(num, digits);

    return 0;
}
