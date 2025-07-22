#include <iostream>

unsigned int string_len(char str[]) {
   unsigned int length = 0;

   while (str[length] != '\0') {
       length++;
   }
   return length;
}

bool palindrome(char str[]){

   int leng = string_len(str);

   for (int i = 0; i < leng / 2; i++) {
      if (str[i] != str[leng - i - 1]) {
          return false;
      }
  }
  return true;
}

int main() {
   char myString[] = "tacocat";

   if (palindrome(myString) == true){
      std::cout << "True";
   } else if (palindrome(myString) == false){
      std::cout << "False";
   }

   return 0;
}