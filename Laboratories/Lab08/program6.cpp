// Write a recursive function in C++ to take a number and calculate the factorial of the number. 
// It should have the following header unsigned int fact(int n);. For anyone unfamiliar with factorials 
// here is a link on what they are. Note: these values grow extremely quickly so dont test your code on any large numbers.

#include <iostream>


unsigned int fact(int n) {
   if (n == 0 || n == 1) {
       return 1;
   }
   else {
       return n * fact(n - 1);
   }
}


int main() {
   int number = 5;
   unsigned int result = fact(number);
   std::cout << "Factorial of " << number << " = " << result << std::endl;
   return 0;
}