/* 
Write a program which reads in three integers a, b, c, such that 0 < {a, b, c} <= 20 and a <= b. 
The program should print the + character a times, then a + c times, then a + c + c times, and so on. 
This pattern should repeat while the line is at most b characters long. At that point, the pattern is 
repeated backwards. For example input 4 7 1 will output:

++++
+++++
++++++
+++++++
+++++++
++++++
+++++
++++

*/

#include <iostream>
using namespace std;

void shape(int a, int b, int c){
    
    int u = a;

    while (u <= b) {
        for (int i = 0; i < u; i++) {
            cout << "+";
        }
        cout << endl;
        u += c;
    }

    u -= c;

    while (u >= a) {
        for (int i = 0; i < u; i++) {
            cout << "+";
        }
        cout << endl;
        u -= c;
    }
}

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    shape(a, b, c);

    return 0;
}