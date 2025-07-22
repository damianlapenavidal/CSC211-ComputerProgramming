#include <iostream>
#include <iomanip>

int main() {
    double x, y;

    std::cin >> x >> y;

    if ( x > 0 && y > 0 ) {
        std::cout << "Quadrant 1" << std::endl;
    }
    else if ( x < 0 && y > 0 ) {
        std::cout << "Quadrant 2" << std::endl;    
    }
    else if ( x < 0 && y < 0 ) {
        std::cout << "Quadrant 3" << std::endl;
    }
    else if ( x > 0 && y < 0 ) {
        std::cout << "Quadrant 4" << std::endl;
    }
    else {
        std::cout << "No quadrant" << std::endl;
    }

    return 0;
}