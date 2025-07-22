// Write a recursive function in C++ to take a std::string and determine if that string is a palindrome. 
// It should have the following header bool pali(std::string str);.



#include <iostream>
#include <cmath>
#include <vector>


int main(){


    std::string n;
    std::getline(std::cin, n);
    for(char& c : n){
        c = std::tolower(c);
    }
    bool match = true;
    int length = n.size();
    for(int i = 0 ; i < (length / 2) ; i++){
        if(n[i] != n[length - i - 1]){
            match = false;
            break;
        }
    }
    if(match == true){
        std::cout << "True";
    } else {
        std::cout << "False";
    }
    return 0;
}
