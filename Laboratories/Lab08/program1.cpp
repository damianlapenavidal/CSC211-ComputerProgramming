// Translate the above psuedocode into C++ and test it with fib(6), ensuring that it matches 
// the calculation you made earlier by hand.

#include <iostream>

int fib(int number) {
   if (number == 0 || number == 1) {
       return number;
   }
   else {
       return fib(number - 1) + fib(number - 2);
   }
}


int main() {
   int result = fib(6);
   std::cout << result << std::endl;
   return 0;
}
