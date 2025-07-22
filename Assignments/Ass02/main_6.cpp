/* 
Write a program which reads in two integers 1 <= n <= 10,000 and 1 <= s <= n and returns 
the sum of the last s elements in the sequence from 1 to n (inclusive). For example, if 
the input is 20 4 the output would be 74.
*/

#include <iostream>
using namespace std;

void sumlast(int n, int s, int& sum) {

    int j = n;

    for (int i = n ; i > (n - s); i--){

        sum += j;
        j = j - 1;
    }
}

int main() {
    
    int n, s;

    int sum = 0;

    cin >> n;
    cin >> s;

    sumlast(n, s, sum);

    cout << sum;

    return 0;
}