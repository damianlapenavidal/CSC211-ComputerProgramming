#include <iostream>
int main() {
    int a;

    std::cin >> a;

    if (a < 50) {
        std::cout << "Safe" << std::endl;
    }
    else if (a >= 50 && a<=55) {
        std::cout << "Pushing your luck" << std::endl;
    }
    else {
        std::cout << "Speeding" << std::endl;
    }

    return 0;
}