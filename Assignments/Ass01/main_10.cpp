#include <iostream>
#include <iomanip>

int main() {
    int a;

    std::cin >> a;

    switch (a) {
        case 0:
            std::cout << "Zero" << std::endl;
            break;
        case 1:
            std::cout << "One" << std::endl;
            break;
        case 2:
            std::cout << "Two" << std::endl;
            break;
        case 3:
            std::cout << "Three" << std::endl;
            break;
        case 4:
            std::cout << "Four" << std::endl;
            break;
        case 5:
            std::cout << "Five" << std::endl;
            break;
        case 6:
            std::cout << "Six" << std::endl;
            break;
        case 7:
            std::cout << "Seven" << std::endl;
            break;
        case 8:
            std::cout << "Eight" << std::endl;
            break;
        case 9:
            std::cout << "Nine" << std::endl;
            break;
        default:
            std::cout << "Not a valid number" << std::endl;
    }
    
    return 0;
}