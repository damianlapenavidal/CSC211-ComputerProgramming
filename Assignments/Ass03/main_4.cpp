#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int num;

    while (cin >> num) {
        arr.push_back(num);
    }

    bool isSorted = true;

    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }

    return 0;
}
