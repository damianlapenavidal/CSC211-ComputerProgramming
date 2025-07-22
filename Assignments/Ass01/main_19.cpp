#include <iostream>
#include <iomanip>

int main() {
   
    int ang1, ang2, ang3;

    std::cin >> ang1;
    std::cin >> ang2;
    std::cin >> ang3;

    if ( ang1 + ang2 + ang3 == 180) {
        if ( ang1 < 90 && ang2 < 90 && ang3 < 90 ) {
            std::cout << "Acute" << std::endl;
        }
        else if ( ang1 == 90 || ang2 == 90 || ang3 == 90 ) {
            std::cout << "Right" << std::endl;    
        }
        else if ( ang1 > 90 || ang2 > 90 || ang3 > 90 ) {
            std::cout << "Obtuse" << std::endl;
        }
    }
    else {
        std::cout << "This triangle is impossible" << std::endl;
    }

    return 0;
}