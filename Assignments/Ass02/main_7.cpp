/* 
Write a program that reads an integer 0 < n < 2^32, returns the sum of all 
digits in n that are divisible by 2. For example, if n = 341238 the output would be 14, 
because it is the sum of 4 + 2 + 8. Hint: a signed int may not be enough.
*/

#include <iostream>
#include <cmath>
using namespace std;

void sumdigits(unsigned int n, unsigned int& sum) {

    unsigned int j = n;

    while (n > 0) {

        j = n % 10;

        if ( ( j % 2 ) == 0){
            sum += j;
        }
        n /= 10;
    }
}

int main() {
    
    unsigned int n;

    unsigned int sum = 0;

    cin >> n;

    sumdigits(n, sum);

    cout << sum;

    return 0;
}