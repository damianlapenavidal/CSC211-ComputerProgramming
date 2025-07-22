// Implement all possible N length binary strings.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void possible(int n, string str){

    if(n == 0){
        cout << str << endl;
        return;
    }

    possible(n - 1, str + "0");
    possible(n - 1, str + "1");

}

int main(){

    int n;
    // enter binary string length
    cin >> n;
    string s = "";
   
    possible(n, s);

    return 0;
}
