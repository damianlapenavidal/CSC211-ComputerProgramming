#include <iostream>
using namespace std;

int main(){

    int input;
    int output = 0;
    int layer = 1;
    cin >> input;

    while(input > 0){
        input -= (layer * layer);
        if (input >= 0){
            output += 1;
        }
        layer += 2;
    }

    cout << output;

}