#include <iostream>
#include <iomanip>

int main() {
    int a, result;

    std::cin >> a;

    if (a % 10 == 9 || a % 10 == -9) {
        std::cout << a << " is good" << std::endl;
    }
    else {
        std::cout << a << " is no good" << std::endl;
    }

    return 0;
}