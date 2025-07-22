#include <iostream>
int main() {
   
   int a, b, c;

   std::cin >> a;
   std::cin >> b;
   std::cin >> c;

   int max = a;

   if ( a > b && a > c ) {
    std::cout << a;
   }
   else if ( b > a && b > c ) {
    std::cout << b;
   }
   else {
    std::cout << c;
   }

    return 0;
}