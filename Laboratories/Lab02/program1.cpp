#include <iostream>

int main(){

    int a, b, c, x1, x2;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    x1 = ( - b + sqrt( ( b * b ) - ( 4 * a * c ) ) ) / ( 2 * a );
    x2 = ( - b - sqrt( ( b * b ) - ( 4 * a * c ) ) ) / ( 2 * a );

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;

    return 0;
}