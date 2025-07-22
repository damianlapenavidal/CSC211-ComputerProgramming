/* 
A number is called a circular prime if all rotations of its digits form a prime. 
For example, the number 197 is a circular prime because all possible rotations 
of its digits: [197, 971, 719] are prime numbers. Write a program that reads in 
an integer 1 <= n <= 10^6 as input and prints True if n is a circular prime and False otherwise.
*/

#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int number) {
    int digits = 0;
    
    // Special case for 0, which has 1 digit
    if (number == 0) {
        return 1;
    }

    // While the number is greater than 0, divide by 10 and increment the digit count
    while (number > 0) {
        number /= 10;
        digits++;
    }
    
    return digits;
}

int isPrime(int number) {
    // Special cases for numbers less than 2
    if (number <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 up to the square root of the number
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0;  // Found a divisor, not prime
        }
    }

    return 1;  // No divisors found, it's a prime number
}

void circularnum(int n, int& ver){

    int dig = countDigits(n);

    for (int i = 0; i < dig; i++){

        if(ver == 1){
        
            int last = n % 10;

            last *= pow(10, dig - 1);

            n /= 10;

            n += last;

            if (isPrime(n) == 0){
                ver = 0;
            } else {}

        }
    }
}


int main() {
    int num;

    cin >> num;

    int verification = 1;

    circularnum(num, verification);

    if (verification == 0){
        cout << "False";
    } else {
        cout << "True";
    }

    return 0;
}