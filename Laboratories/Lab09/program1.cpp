// Write a recursive function with the header void permute_str(std::string current, 
// std::string choices); that will recursively build all permutations of a string it receives in main as its choices argument.

#include <iostream>

void permute_str(std::string current, std::string choices) {
   if (choices.empty()) {
       std::cout << current << std::endl;
       return;
   }


   for (size_t i = 0; i < choices.size(); ++i) {
       std::string new_current = current + choices[i];


       std::string new_choices = choices.substr(0,i) + choices.substr(i + 1);


       permute_str(new_current, new_choices);
   }
}

int main() {
   std::string input;
   std::cout << "Enter string: ";
   std::cin >> input;


   permute_str("", input);


   return 0;
}
