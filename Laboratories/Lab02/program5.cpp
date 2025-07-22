#include <iostream>

int main(){

    float a, b, c, d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    d = ( a + b + c ) / 3;

    std::cout << "Average is " << d << std::endl;

    return 0;
}