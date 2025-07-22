// Write a recursive function in C++ to return the sum of all value from 1 to a given number. 
// It should have the following header unsigned int sum(int n);.

#include <iostream>

unsigned int sum(int n) {
   if (n == 1) {
       return 1;
   }
   else {
       return n + sum(n - 1);
   }
}

int main() {
   int number = 6;
   unsigned int result = sum(number);
   std::cout << "Sum " << number << " = " << result << std::endl;
   return 0;
}
