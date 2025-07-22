/*
Implement the described function using the following hints:

Remember to start with your base cases.
The example above gives a hint on the order to check the values in.
Get a working solution that overcounts, then trim it down so it accurately counts.
Draw this out! This will be infinitely easier if you draw the trace of what you expect to be happening, 
    and compare it to a drawing of the trace that is actually happening.
Notice that the calculation for the # of ways to make 5 cents will yield 2, so you cannot return immediately from your conditionals. 
    Have 1 return statement at the end of the function to cover all of the conditionals other than the base cases.
*/

#include <iostream>

int CoinChange(int total, int arr[], int n) {
    // Base case: if total is 0, we found a way to make change
    if (total == 0) {
        return 1;
    }
    // Base case: if total is negative or no coins left, return 0
    if (total < 0 || n <= 0) {
        return 0;
    }

    // Recursive case: 
    // 1. Include the last coin (subtract its value and keep it in the count)
    // 2. Exclude the last coin (move to the next coin)
    return CoinChange(total - arr[n - 1], arr, n) + CoinChange(total, arr, n - 1);
}

int main() {
    int amount = 10;
    int array[] = {25, 10, 5, 1}; 
    int size = sizeof(array) / sizeof(array[0]); // Get the number of coins

    std::cout << "Number of ways to make change: " << CoinChange(amount, array, size) << std::endl;
    return 0;
}
