// Write a recursive function in C++ to see if a given array of integers is sorted in strictly-increasing order. 
// It should have the following header bool is_sorted(int* arr, int n);.

#include <iostream>


bool is_sorted(int* arr, int n) {
   if (n <= 1) {
       return true;
   }
   if (arr[n - 2] < arr[n - 1]) {
       return is_sorted(arr, n - 1);
   }
   else {
       return false;
   }
}


int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]);
   if (is_sorted(arr, size)) {
       std::cout << "Sorted" << std::endl;
   } else {
       std::cout << "Not Sorted" << std::endl;
   }
   return 0;
}
