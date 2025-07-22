#include <iostream>
int main() {
    char letter;

    std::cout << "Enter your letter: ";

    std::cin >> letter;

    if (97 <= letter && letter <= 122) {
        std::cout << "Lower Case" << std::endl;
    }
    else if (65 <= letter && letter <= 90) {
        std::cout << "Upper Case" << std::endl;
    }
    else {
        std::cout << "Not a letter" << std::endl;
    }

    return 0;
}