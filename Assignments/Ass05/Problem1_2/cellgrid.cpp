#include "cellgrid.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// reads a file containing 1's and 0's and the dimesnsions to expect and
// creates a Cellgrid object
Cellgrid::Cellgrid(const char *fname, int m, int n) {
    // assign row and col counters
    rows = m;
    cols = n;

    // create the grid on the heap, this will have to be deallocated later in
    // the destructor
    grid = new bool[rows*cols];

    // create a file reader stream to read data from a file
    ifstream infile;

    // open a stream to the given file
    infile.open(fname);

    // we are using row-major order in order to store this grid in 1D
    // instead of accessing grid like grid[a][b], we instead do:
    // grid[(a * number of columns) + b]
    for(int i = 0; i < rows; i++) {
        // calculate "(a * number of columns)" from above
        // in order to save some unnecessary computation
        int base = i * cols;
        for(int offset = 0; offset < cols; offset++) {
            // read data from filestream and store it in grid
            infile >> grid[base + offset];
        }
    }

    // close the filestream once we are done with it
    infile.close();
}

// destruct object where not implicit to the program
Cellgrid::~Cellgrid() {
    // since we allocated memory on the heap, we must deallocate that memory
    delete[] grid;
}

void Cellgrid::getAdjacent(int init_x, int init_y, int conn, vector<vector< int > > &checked) {
    /*
    adds the adjacent fillled cells to checked if they fit criteria
    then resursivley calls the adjacent cells to do the same...
    */
    int offsets[8][2] = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};

    int x, y;
    bool repeat;

    for (int i = 0; i < conn; i++) {
        x = init_x + offsets[i][0];
        y = init_y + offsets[i][1];

        //skip if not a valid coordiante
        if ( (x < 0 || x >= cols) || (y < 0 || y >= rows) ) {
            continue;
        }

        //skip if not filled
        if (grid[cols * y + x] != true) {
            continue;
        } 
        
        //skip if already accounted for
        repeat = false;
        for (int j = 0; j < checked.size(); j++) {
            if (x == checked.at(j).at(0) && y == checked.at(j).at(1)) {
                repeat = true;
                break;
            }
        }
        //dont re add repeats
        if (pos_in_vector(x, y, checked)) {
            continue;
        }

        //not a repeat
        vector<int> cords;
        cords.push_back(x);
        cords.push_back(y);
        checked.push_back(cords);

        getAdjacent(x, y, conn, checked);
    }
    
}

bool Cellgrid::pos_in_vector(int x, int y, vector<vector< int > > &checked) {
    for (int j = 0; j < checked.size(); j++) {
        if (x == checked.at(j).at(0) && y == checked.at(j).at(1)) {
            return true;
        }
    }
    return false;
}

// this is the function call which will be made by the autograder to test
// your implementation for problem 1. (row, col) is the "start point" for
// counting the cells, conn is the type of connection to consider (4 or 8).
int Cellgrid::countCells(int row, int col, int conn) {
    // TODO:
    // implement solution for problem 1.

    if (grid[cols * (row-1) + col-1] != true) {
        return 0;
    } 
    vector<vector< int> > checked;

    // this is where your private helper method which does the
    // backtracking should be called

    getAdjacent(col-1, row-1, conn, checked);
    
    // this will prevent a compiler error but should be changed
    // to return the cell count you have found
    
    return checked.size();
}

// this is the funciton call which will be made by the autograder to test
// your implementation for problem 2. conn is the type of connection
// to consider (4 or 8).
int Cellgrid::countBlobs(int conn) {
    //TODO:
    // implement solution for problem 2

    vector<vector< int> > checked;
    int blobs = 0;

    // this is where your private helper method which does the
    // backtracking should be called

    for (int x = 0; x < cols; x++) {
        for (int y = 0; y < rows; y++) {
            bool value = grid[cols * y + x];
            if (value != true) {
                continue;
            }

            if (pos_in_vector(x, y, checked)) {
                continue;
            }

            blobs += 1;
            getAdjacent(x, y, conn, checked);
        }
    }

    // this will prevent compiler error but should be changed
    // to return the blob count which you have found using
    // your helper function

    return blobs;
}

// this function prints your cellgrid in 2D format without trailing
// whitespace. Use this function to aid in debugging if you wish
void Cellgrid::print() {
    for(int i = 0; i < rows; i++) {
        int base = i * cols;
        std::cout << grid[base];
        for(int offset = 1; offset < cols; offset++) {
            std::cout << ' ' << grid[base + offset];
        }
        std::cout << std::endl;
    }
}
