/*
For this assignment, we are asking you to implement Conway's Game of Life using a two-dimensional array as a grid 
in which to store the cells. Live cells are denoted as * characters, dead cells are denoted by the . character.

As input, you will be given a line containing the number of rows, number of columns, and number of generations to 
simulate in the form m n g followed by m lines containing the initial state of the grid. 3 <= m,n <= 20 and 0 <= g <= 50

For example, a 4 x 5 grid on which 7 generations of life should be simulated, would be given as follows:
4 5 7
. * * . .
. * . . .
* * * . *
. . . . *
*/

#include <iostream>
#include <vector>
using namespace std;

int LiveNeighbours(vector<vector<char>> &grid, int i, int j, int rows, int columns){
    int live = 0; // Initialize count to 0

    for (int x = i - 1; x <= i + 1; x++) { // Check index row, the one above and below
        for (int y = j - 1; y <= j + 1; y++) { // Check index column, the one on the left and right
            if (x >= 0 && x < rows && y >= 0 && y < columns && !(x == i && y == j)) { // Check bounds
                if (grid[x][y] == '*') {
                    live++; // Count how many live cells
                }
            }
        }
    }

    return live;
}

int main(){
    int rows;
    cin >> rows;
    int columns;
    cin >> columns;
    int gen;
    cin >> gen;
    
    vector<vector<char> > CurrentState(rows, vector<char>(columns));

    // Read Input Grid
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cin >> CurrentState[i][j];
        }
    }

    // Repeat gen times
    for (int x = 0; x < gen; x++){
        vector<vector<char>> NextState = CurrentState;  // Create next state grid

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                int live = LiveNeighbours(CurrentState, i, j, rows, columns); // Check live neighbours for specific index
                if (CurrentState[i][j] == '*') {
                    if (live < 2 || live > 3) // Rule 1 and 2
                        NextState[i][j] = '.';
                } else {
                    if (live == 3) // Rule 4
                        NextState[i][j] = '*';
                }
            }
        }
        CurrentState = NextState; // Update new grid for next generation
    }
    
    // Print Final Grid
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << CurrentState[i][j];
            if (j < (columns - 1)){
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}