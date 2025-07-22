// For this assignment, you will be given a filled out Sudoku board state and you will check whether the board 
// has been properly solved or not according to the given rules.

#include <iostream>
#include <vector>
using namespace std;

bool TestGroup(vector<int> group) {
    int count[10] = {0}; // To track numbers 1 to 9

    for (int i = 0; i < group.size(); ++i) {
        int temp = group[i];
        if (temp < 1 || temp > 9 || count[temp] != 0) { // Check for range and duplicates
            return false;
        }
        count[temp] = 1; // Mark the number as seen
    }
    return true;
}

bool TestBlocks(vector<vector<int> > matrix){
    bool result = true;
    // Block 1
    vector<int> block1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            block1.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block1)) result = false;
    // Block 2
    vector<int> block2;
    for (int i = 0; i < 3; ++i) {
        for (int j = 3; j < 6; ++j) {
            block2.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block2)) result = false;
    // Block 3
    vector<int> block3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 6; j < 9; ++j) {
            block3.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block3)) result = false;
    // Block 4
    vector<int> block4;
    for (int i = 3; i < 6; ++i) {
        for (int j = 0; j < 3; ++j) {
            block4.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block4)) result = false;
    // Block 5
    vector<int> block5;
    for (int i = 3; i < 6; ++i) {
        for (int j = 3; j < 6; ++j) {
            block5.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block5)) result = false;
    // Block 6
    vector<int> block6;
    for (int i = 3; i < 6; ++i) {
        for (int j = 6; j < 9; ++j) {
            block6.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block6)) result = false;
    // Block 7
    vector<int> block7;
    for (int i = 6; i < 9; ++i) {
        for (int j = 0; j < 3; ++j) {
            block7.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block7)) result = false;
    // Block 8
    vector<int> block8;
    for (int i = 6; i < 9; ++i) {
        for (int j = 3; j < 6; ++j) {
            block8.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block8)) result = false;
    // Block 9
    vector<int> block9;
    for (int i = 6; i < 9; ++i) {
        for (int j = 6; j < 9; ++j) {
            block9.push_back(matrix[i][j]);
        }
    }
    if (!TestGroup(block9)) result = false;
    return result;
}

bool TestRowsColumns(vector<vector<int> > matrix){
    bool result = true;
    // Rows
    for (int i = 0; i < 9; ++i) {
        vector<int> row;
        for (int j = 0; j < 9; ++j) {
            row.push_back(matrix[i][j]);
        }
        if (!TestGroup(row)) result = false;
    }
    // Columns
    for (int j = 0; j < 9; ++j) {
        vector<int> column;
        for (int i = 0; i < 9; ++i) {
            column.push_back(matrix[i][j]);
        }
        if (!TestGroup(column)) result = false;
    }
    return result;
}

int main(){

    int rows = 9;
    int columns = 9;
    vector<vector<int> > matrix(rows, vector<int>(columns));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    // Test Blocks
    bool verify1 = TestBlocks(matrix);

    // Test Rows & Columns
    bool verify2 = TestRowsColumns(matrix);

    if (verify1 == true && verify2 == true){
        cout << "Solution is good!";
    } else {
        cout << "Wrong solution!";
    }
    
    return 0;
}