#include <iostream>


void replace(char str[], char a, char b) {
   for (int i = 0; str[i] != '\0'; i++) {
       if (str[i] == a) {
           str[i] = b;
       }
   }
}


int main() {
   char myString[] = "Hello, World!";


   std::cout << "Original string: " << myString << std::endl;


   replace(myString, 'o', 'x');


   std::cout << "Modified string: " << myString << std::endl;
   return 0;
}
