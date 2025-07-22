#include <iostream>
#include <iomanip>

int main() {
   
    double ornum, modnum;
    char orletter, modletter;

    std::cin >> ornum;
    std::cin >> orletter;

    if ( orletter == 67 ) {
        modletter = 70;
        modnum = ( (9 * ornum) / 5 ) + 32;
        std::cout << std::fixed << std::setprecision(4);
        std::cout << ornum << " degree(s) " << orletter << " is equal to " << modnum << " degree(s) " << modletter << std::endl;
    }
    else if ( orletter == 70 ) {
        modletter = 67;
        modnum = ( 5 * (ornum - 32) ) / 9;
        std::cout << std::fixed << std::setprecision(4);
        std::cout << ornum << " degree(s) " << orletter << " is equal to " << modnum << " degree(s) " << modletter << std::endl;   
    }

    return 0;
}