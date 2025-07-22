#include <iostream>
#include <iomanip>

int main() {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int min = a;

    if ( a < b && a < c ) {
        std::cout << "The smallest number entered was " << a << std::endl;
    }
    else if ( b < a && b < c ) {
        std::cout << "The smallest number entered was " << b << std::endl;    
    }
    else if ( c < a && c < b ) {
        std::cout << "The smallest number entered was " << c << std::endl;
    }

    return 0;
}