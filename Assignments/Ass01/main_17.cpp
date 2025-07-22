#include <iostream>
#include <iomanip>

int main() {
    char a;

    std::cin >> a;

    switch (a) {
        case 65:
            std::cout << "Excellent" << std::endl;
            break;
        case 97:
            std::cout << "Excellent" << std::endl;
            break;
        case 66:
            std::cout << "Good" << std::endl;
            break;
        case 98:
            std::cout << "Good" << std::endl;
            break;
        case 67:
            std::cout << "Average" << std::endl;
            break;
        case 99:
            std::cout << "Average" << std::endl;
            break;
        case 68:
            std::cout << "Poor" << std::endl;
            break;
        case 100:
            std::cout << "Poor" << std::endl;
            break;
        case 70:
            std::cout << "Failing" << std::endl;
            break;
        case 102:
            std::cout << "Failing" << std::endl;
            break;
    }
    
    return 0;
}