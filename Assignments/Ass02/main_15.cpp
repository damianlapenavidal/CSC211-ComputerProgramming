/* 
Write a program which reads in an integer 0 < n <= 10 prints out this nice rug pattern. 
See examples below for input values of n = 2, n = 3, and n = 4 respectively.

#========#
|  <><>  |
|<>....<>|
|<>....<>|
|  <><>  |
#========#
#============#
|    <><>    |
|  <>....<>  |
|<>........<>|
|<>........<>|
|  <>....<>  |
|    <><>    |
#============#
#================#
|      <><>      |
|    <>....<>    |
|  <>........<>  |
|<>............<>|
|<>............<>|
|  <>........<>  |
|    <>....<>    |
|      <><>      |
#================#

*/

#include <iostream>
#include <string>
using namespace std;

void printRug(int n) {
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= 4 * n + 1; j++){
            if (i == 0){
                if (j == 0){
                    cout << "#"; // First # (first line)
                } else if (j == (4 * n + 1)){
                    cout << "#"; // Last # (first line)
                } else if (j > 0 && j < (4 * n + 1)){
                    cout << "="; // All = (first line)
                }
            } 
            
            else if (i > 0){
                if (j == 0){
                    cout << "|"; // | Left side
                } else if (j == (4 * n + 1)){
                    cout << "|"; // | Right side
                } else if ((2 * n + 2 * i) < j && j < (4 * n + 1)){
                    cout << " "; // Space Left side
                } else if (0 < j && j < ((2 * n - 2 * i) + 1)){
                    cout << " "; // Space Right side
                } else if (((2 * n - 2 * i) + 2) < j && j < (2 * n + 2 * i - 1) ){
                    cout << "."; // Dots Middle
                } else if ((2 * n - 2 * i) < j && j <= ((2 * n - 2 * i) + 2)){
                    if (j % 2 == 0){
                        cout << ">";
                    } else {
                        cout << "<";
                    }
                } else {
                    if (j % 2 == 0){
                        cout << ">";
                    } else {
                        cout << "<";
                    }
                }
            } 
            
            
        
        }
        
        cout << endl;
    }

    for (int i = n; i >= 0; i--){
        for (int j = 4 * n + 1; j >= 0; j--){
            if (i == 0){
                if (j == 0){
                    cout << "#"; // First # (first line)
                } else if (j == (4 * n + 1)){
                    cout << "#"; // Last # (first line)
                } else if (j > 0 && j < (4 * n + 1)){
                    cout << "="; // All = (first line)
                }
            } 
            
            else if (i > 0){
                if (j == 0){
                    cout << "|"; // | Left side
                } else if (j == (4 * n + 1)){
                    cout << "|"; // | Right side
                } else if ((2 * n + 2 * i) < j && j < (4 * n + 1)){
                    cout << " "; // Space Left side
                } else if (0 < j && j < ((2 * n - 2 * i) + 1)){
                    cout << " "; // Space Right side
                } else if (((2 * n - 2 * i) + 2) < j && j < (2 * n + 2 * i - 1) ){
                    cout << "."; // Dots Middle
                } else if ((2 * n - 2 * i) < j && j <= ((2 * n - 2 * i) + 2)){
                    if (j % 2 == 0){
                        cout << "<";
                    } else {
                        cout << ">";
                    }
                } else {
                    if (j % 2 == 0){
                        cout << "<";
                    } else {
                        cout << ">";
                    }
                }
            }
        }
        cout << endl;
    }
}

int main() {
    int n;

    cin >> n;

    printRug(n);

    return 0;
}