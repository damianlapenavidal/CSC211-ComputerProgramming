// Write a recursive function in C++ to print out the values in an integer array, with one per line. 
// It should have the following header void print_arr(int * arr, int n);.

#include <iostream>
#include <vector>
#include <string>

void print_arr(int * arr, int n){


    if(n <= 0){
        return 0;
    }


    std::cout << a[0]; << std::endl;
    print_arr(arr + 1, n - 1);
}

int main(){

    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    print_arr(a, n);

    return 0;
}
