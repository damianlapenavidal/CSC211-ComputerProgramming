#include <iostream>


void all_to(char str[], bool caps) {
   for (int i = 0; str[i] != '\0'; ++i) {
       if (caps) {
           str[i] = std::toupper(str[i]);
       }
       else {
           str[i] = std::tolower(str[i]);
       }
   }
}


int main() {
   char myString[] = "Hello World!";


   all_to(myString, true);
   std::cout << "String in uppercase: " << myString << std::endl;


   all_to(myString, false);
   std::cout << "String in lowercase: " << myString << std::endl;


   return 0;
}
