#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[n];

    for(int i = 1; i <= n; i++){
    cin >> arr[i-1];
    }

    int output = 0;
    double result = 1000000000000000;

    for(int i = 0; i < n; i++){
    if (arr[i] < result){
        result = arr[i];
        output = i;
    }
    }

    cout << output;

    return 0;
}