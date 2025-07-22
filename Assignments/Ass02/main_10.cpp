/*
Write a program which will read three double values: 0 < loan <= 10^10 (the initial loan), 
0 <= interest <= .5 (the monthly interest), and 0 < payment <= loan (the monthly payment) 
respectively. We will assume that your monthly payment always takes place after the loan 
accrues any interest for that month. We will also assume that there will be a minimum of 
one month required to pay off any loan. Your program should print out the number of months 
required to pay off the loan. For example, input 500.0 0.05 499.0 will output 2.

It is worth noting that a 50% interest rate is just an upper bound, you should be aware 
of this during your local testing as you could easily encounter an infinite loop 
(scenarios in which the loan will never be paid off). However, you can assume that no 
such test cases will appear on Gradescope.
*/

#include <iostream>
using namespace std;

void payoff(double l, double i, double p){

    double t = 0;

    while (l > 0){
        double compound = i * l;
        l += compound;
        l -= p;
        t += 1;
    }

    cout << t;
}

int main() {
    
    double loan, interest, payment;

    cin >> loan >> interest >> payment;

    payoff(loan, interest, payment);

    return 0;
}