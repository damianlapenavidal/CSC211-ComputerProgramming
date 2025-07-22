// Write a recursive function in C++ to take an array of integers and calculate it sum. 
// It should have the following header int sum(int* arr, int n);.

#include <iostream>
int sum(int* arr, int n) {
   if (n == 0) {
       return 0;
   }
   else {
       return arr[n - 1] + sum(arr, n - 1);
   }
}


int main() {
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int size = sizeof(arr) / sizeof(arr[0]);
   int result = sum(arr, size);
   std::cout << result << std::endl;
   return 0;
}