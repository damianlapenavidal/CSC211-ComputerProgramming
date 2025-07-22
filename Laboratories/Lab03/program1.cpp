#include <iostream>
int main() {
    int number;

    std::cout << "What is your number grade: ";
    std::cin >> number;

    if (97 <= number && number <= 100) {
        std::cout << "A+" << std::endl;
    }
    else if (93 <= number && number <= 96) {
        std::cout << "A" << std::endl;
    }
    else if (90 <= number && number <= 92) {
        std::cout << "A-" << std::endl;
    }
    else if (87 <= number && number <= 89) {
        std::cout << "B+" << std::endl;
    }
    else if (83 <= number && number <= 86) {
        std::cout << "B" << std::endl;
    }
    else if (80 <= number && number <= 82) {
        std::cout << "B-" << std::endl;
    }
    else if (77 <= number && number <= 79) {
        std::cout << "C+" << std::endl;
    }
    else if (73 <= number && number <= 76) {
        std::cout << "C" << std::endl;
    }
    else if (70 <= number && number <= 72) {
        std::cout << "C-" << std::endl;
    }
    else if (67 <= number && number <= 69) {
        std::cout << "D+" << std::endl;
    }
    else if (65 <= number && number <= 66) {
        std::cout << "D" << std::endl;
    }
    else {
        std::cout << "E/F" << std::endl;
    }

    return 0;
}