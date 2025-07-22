// Write a program which reads a sequence of 0 < n <= 100 integers as input and prints out the number 
// of occurrences of the first integer in the entire sequence.
// For example, if the input is 7 1 3 6 7 -10 98 11 7, output should be 3 as 7 occurs 3 times

#include <iostream>
using namespace std;

int main(){

    int firstst_seq;
    cin >> firstst_seq;
    
    int output = 1;

    int sequence;
    while (cin >> sequence) {
        if (sequence == firstst_seq){
            output += 1;
      }
    }

    cout << output;

    return 0;
}