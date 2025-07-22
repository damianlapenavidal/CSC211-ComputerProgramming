/*
A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. 
For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 
28 is a perfect number. Write a program that reads in an integer 0 < x <= 10^4 and prints True if x 
is a perfect number and False otherwise.
*/

#include <iostream>
using namespace std;

void PerfectNumber(int x) {
    int sum = 0;

    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }

    if (sum == x) {
        cout << "True";
    } else {
        cout << "False";
    }
}

int main() {

    int num;
    cin >> num;

    PerfectNumber(num);

    return 0;
}
