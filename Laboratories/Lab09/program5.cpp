// Find Greatest Common Divisor (GCD) of 2 numbers using recursion.

#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
 }
 
 
 int main() {
    int a, b;
    std::cin>>a>>b;
 
 
    gcd(a, b);
 
 
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    return 0;
 }
 