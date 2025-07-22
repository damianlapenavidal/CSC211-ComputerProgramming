#include <iostream>
#include <iomanip>

int main() {
    int a;

    std::cin >> a;

    if ( a < 16) {
        std::cout << "Too young" << std::endl;
    }
    else if (a >= 16 && a < 18) {
        std::cout << "Can drive" << std::endl;
    }
    else if (a >= 18 && a < 21) {
        std::cout << "Can join the military" << std::endl;
    }
    else {
        std::cout << "Can have a beer" << std::endl;
    }

    return 0;
}