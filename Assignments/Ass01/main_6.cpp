#include <iostream>
#include <iomanip>

int main() {
    int a;

    std::cin >> a;


    if (a > 0) {
        std::cout << a << " is positive" << std::endl;
    }
    else if (a < 0) {
        std::cout << a << " is negative" << std::endl;
    }
    else if (a == 0) {
        std::cout << a << " is neither positive nor negative" << std::endl;
    }

    return 0;
}