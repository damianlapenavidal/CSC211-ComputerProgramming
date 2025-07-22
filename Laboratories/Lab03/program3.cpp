#include <iostream>
int main() {
    int a;

    std::cin >> a;

    if (a % 2 == 0 && a / 2 != 1) {
        std::cout << "Not Prime" << std::endl;
    }
    else if (a % 3 == 0 && a / 3 != 1) {
        std::cout << "Not Prime" << std::endl;
    }
    else if (a % 5 == 0 && a / 5 != 1) {
        std::cout << "Not Prime" << std::endl;
    }
    else if (a % 7 == 0 && a / 7 != 1) {
        std::cout << "Not Prime" << std::endl;
    }
    else if (a % 11 == 0 && a / 11 != 1) {
        std::cout << "Not Prime" << std::endl;
    }
    else {
        std::cout << "Prime" << std::endl;
    }

    return 0;
}