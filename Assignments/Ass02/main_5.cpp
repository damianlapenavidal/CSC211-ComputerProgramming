/* 
Write a program which reads in an integer 0 < n <= 1,000,000,000 and prints 
True if the value is a prime number and False if it is not.
*/

#include <iostream>
using namespace std;

void not_prime(int a, bool& result){
    
    for (int i = 2; i < a / 2; i++){
        if (a % i == 0 && a / i != 1){
            result = true;
            break;
        }
    }
}

int main() {
    
    int a;
    bool ret;
    std::string result;

    std::cin >> a;
    if (a == 0 || a == 1){
        result = "False";
    } else {
        not_prime(a, ret);

        if (ret == true){
            result = "False";
        } else {
            result = "True";
        }
    }

    cout << result;

    return 0;
}
