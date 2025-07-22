#include <iostream>


unsigned int string_len(char str[]) {
   unsigned int length = 0;


   while (str[length] != '\0') {
       length++;
   }
   return length;
}


int main() {
   char myString[] = "Hello World!";


   std::cout << string_len(myString) << std::endl;


   return 0;


}
