#include <iostream>
int main() {
   
   int a, b, c;

   std::cin >> a;
   std::cin >> b;
   std::cin >> c;

   if (a <= c && b >= c){
        std::cout << c << " is within range" << std::endl;
   } else {
        std::cout << c << " is not within range" << std::endl;
   }

    return 0;
}