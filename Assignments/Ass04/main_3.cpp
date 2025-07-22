/*
As input you will be given some initial board state in the form of a sequence of numbers where 0 corresponds to the "blank" tile. 
The example below would be the form of the "initial state" example above. After that will be a sequence of commands "UP", "DOWN", 
"LEFT", and "RIGHT" represented by characters on a single line separated by spaces. (The example command sequence below has no 
connection to the example graphic)
*/

#include <iostream>
#include <vector>
using namespace std;

void FindZero(vector<vector<int> >& matrix, int& row, int& column){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == 0){
                row = i;
                column = j;
            }
        }
    }
    return;
}

void Commands(vector<vector<int> >& matrix, char ch, int& zero_r, int& zero_c){
    if (ch == 'U'){
        if (zero_r != 0){
            matrix[zero_r][zero_c] = matrix[zero_r - 1][zero_c];
            matrix[zero_r - 1][zero_c] = 0;
            zero_r--;
        }
    }
    else if (ch == 'D'){
        if (zero_r != 2){
            matrix[zero_r][zero_c] = matrix[zero_r + 1][zero_c];
            matrix[zero_r + 1][zero_c] = 0;
            zero_r++;
        }
    }
    else if (ch == 'L'){
        if (zero_c != 0){
            matrix[zero_r][zero_c] = matrix[zero_r][zero_c - 1];
            matrix[zero_r][zero_c - 1] = 0;
            zero_c--;
        }
    }
    else if (ch == 'R'){
        if (zero_c != 2){
            matrix[zero_r][zero_c] = matrix[zero_r][zero_c + 1];
            matrix[zero_r][zero_c + 1] = 0;
            zero_c++;
        }
    }
    return;
}

bool CheckMatrix(vector<vector<int> >& matrix){
    int correct[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != correct[i][j]){
                return false;
            }
        }
    }

    return true;
}

int main(){

    vector<vector<int> > InputMatrix(3, vector<int>(3));
    vector<char> Sequence;
    char letter;

    // Read Input Puzzle
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> InputMatrix[i][j];
        }
    }

    // Read Input Commands
    while (cin >> letter) {
        Sequence.push_back(letter);
    }

    // Find Zero in Matrix
    int ZeroRow;
    int ZeroColumn;
    FindZero(InputMatrix, ZeroRow, ZeroColumn);

    // Perform Commands in Sequence
    for (int x = 0; x < Sequence.size(); x++){
        Commands(InputMatrix, Sequence[x], ZeroRow, ZeroColumn);
    }

    // Check if correct final matrix

    if (CheckMatrix(InputMatrix) == true) {
        cout << "Solution is good!";
    } else {
        cout << "Wrong solution!";
    }

    return 0;
}