#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    double x1, y1, x2, y2;
    double len1, len2, normal;
    std::string angle;

    // Input vectors
    std::cin >> x1 >> y1 >> x2 >> y2;

    // Calculate Length / Magnitude
    len1 = sqrt(x1 * x1 + y1 * y1);
    len2 = sqrt(x2 * x2 + y2 * y2);

    // Calculate Normal Dot Product
    normal = ( x1 / len1 ) * ( x2 / len2 ) + ( y1 / len1 ) * ( y2 / len2 );

    // Find Type of Angle
    if ( normal < 0){
        angle = "Obtuse";
    }
    else if ( normal == 0){
        angle = "Perpendicular";
    }
    else {
        angle = "Acute";
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Length of v1: " << len1 << std::endl;
    std::cout << "Length of v2: " << len2 << std::endl;
    std::cout << "Their normalized dot product is " << normal << " and they are " << angle;

    return 0;
}