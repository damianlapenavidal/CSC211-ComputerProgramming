#include <iostream>
int main() {
    int num;

    std::cout << "What is your number: ";
    std::cin >> num;

    if (num % 2 == 0) {
            std::cout << "1";  // The number is even
            std::cout << "3";  // The number is evenly divisible by 2
        } else {
            std::cout << "2";  // The number is odd
     }
    if (num % 3 == 0) {
            std::cout << "4";  // The number is evenly divisible by 3
    }

    return 0;
}
