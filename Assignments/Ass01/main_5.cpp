#include <iostream>
#include <iomanip>

int main() {
    int a;

    std::cin >> a;

    if (a % 2 == 0) {
        std::cout << a << " is even" << std::endl;
    }
    else if (a % 2 == 1 || a % 2 == -1) {
        std::cout << a << " is odd" << std::endl;
    }

    return 0;
}