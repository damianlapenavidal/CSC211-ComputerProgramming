// Write a recursive function in C++ to print out the values in an integer array in reverse order, with one per line. 
// It should have the following header void print_rev_arr(int * arr, int n);.

#include <iostream>
using namespace std;

void print_rev_arr(int * arr, int n){
    if (n > 0){
        cout << arr[n-1] << endl;
        print_rev_arr(arr, n-1);
    }
}

int main(){
    int size = 5;
    int Arr[] = {1, 2, 3, 4, 5};

    print_rev_arr(Arr, size);

    return 0;
}