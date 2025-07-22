#include <iostream>


void remove(char str[], char a) {
   for (int i = 0; str[i] != '\0'; ++i) {
       if (str[i] == a) {
           for (int j = i; str[j] != '\0'; ++j) {
               str[j] = str[j + 1];
           }
           break;
       }
   }
}


int main() {
   char myString[] = "Hello World!";


   std::cout << "Original string: " << myString << std::endl;


   remove(myString, 'o');


   std::cout << "Modified string: " << myString << std::endl;


   return 0;
}
