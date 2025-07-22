// Program 5. Write a recursive function in C++ to return the sum of a numbers digits. 
// It should have the following header int sum_digits(int n);

#include <iostream>
using namespace std;

int sum_digits(int n){

    if (n > 0){
        int sum = n % 10 + sum_digits(n / 10);
        return sum;
    }
    else {
        return n % 10;
    }
}

int main(){
    int number = 5555;

    cout << sum_digits(number);

    return 0;
}