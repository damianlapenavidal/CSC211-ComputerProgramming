#include <iostream>
#include <iomanip>

int main() {
    int a, b,c; 
    char d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> d;


    if (d == 45) {
        c = a - b;
        std::cout << a << " - " << b << " = " << c << std::endl;
    }
    else if (d == 43) {
        c = a + b;
        std::cout << a << " + " << b << " = " << c << std::endl;
    }
    else if (d == 42) {
        c = a * b;
        std::cout << a << " * " << b << " = " << c << std::endl;
    }
    else if (d == 47) {
        c = a / b;
        std::cout << a << " / " << b << " = " << c << std::endl;
    }

    return 0;
}