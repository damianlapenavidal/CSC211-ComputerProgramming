/* 
Write a program which reads in an integer -15 < n < 15 and an integer 0 < k < 10 and 
prints the value of n to the power of k. Cannot use the built-in function pow.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void power(double base, double exp, double& solution){

    solution = base;

    for (int i = 1; i < exp; i++){
        
        solution *= base;

    }
}

int main() {
    
    double n, k, result;

    cin >> n;
    cin >> k;

    if ( n == 0) {
        result = 0;
    } else {
        power(n, k, result);
    }

    cout << fixed << setprecision(0);

    cout << result;
    return 0;
}