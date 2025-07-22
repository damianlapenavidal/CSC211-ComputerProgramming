/* 
Write a program which reads in three integers r, g, b representing RGB values 
ranging from 0 to 255 (inclusive) and prints out their hexadecimal representation. 
For example, if the input is 245 13 0 the output would be #F50D00.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void RGBColor(int r, int g, int b) {

    cout << "#" << uppercase << hex << setw(2) << setfill('0') << r << setw(2) << setfill('0') << g << setw(2) << setfill('0') << b << endl;
}

int main() {
    
    int r, g, b;

    cin >> r >> g >> b;

    RGBColor(r, g, b);

    return 0;
}