/* 
Write a program which reads in a single integer 0 <= n < 30 and prints out the factorial of n. 
Factorials get very big very quickly and can easily exceed the limits of a signed int that uses 4 bytes. 
If the value of factorial of n is too large to be stored in an int (>2,147,483,647), your program should print Can't handle this.
*/

#include <iostream>
using namespace std;

void factorial(int n, int& counter) {

    if(n == 0) {
        counter = 1;
    } else if (n > 0) {
        counter = n;
        for (int i = n - 1 ; i > 0; i--){
            n = n - 1;
            counter = counter * n;
            if (counter > 2147483647 / n) {
                counter = -1;
                return;
            }
        }
    }
}

int main() {
    
    int num, result = 0;

    cin >> num;

    factorial(num, result);

    if (result == -1) {
        cout << "Can't handle this";
    } else {
        cout << result;
    }

    return 0;
}