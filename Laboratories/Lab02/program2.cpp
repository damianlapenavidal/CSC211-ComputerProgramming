#include <iostream>

int main(){

    float t, n, r;

    std::cout << "Input the price of product (before tax)" << std::endl;
    std::cin >> n;

    t = ((n*7)/100);
    r = t+n;

    std::cout << "The price after tax will be " << r << std::endl;

    return 0;
}