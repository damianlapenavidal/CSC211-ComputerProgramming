// Implement N-Queens

#include <iostream>


bool isSafe(int board[], int row, int col) {
   for (int prevRow = 0; prevRow < row; prevRow++) {
       if (board[prevRow] == col || abs(board[prevRow] - board[row - 1]) == abs(board[prevRow] - col) == row - prevRow) {
           return false;
       }
   }
   return true;
}


void printSolution(int board[], int N) {
   for (int i = 0; i < N; i++) {
       for (int j = 0; j < N; j++) {
           if (board[i] == j) {
               std::cout << "Q ";
           } else {
               std::cout << ". ";
           }
       }
       std::cout << std::endl;
   }
   std::cout << std::endl;
}


void solveNQueenUtil(int board[], int row, int N) {
   if (row == N) {
       printSolution(board, N);
       return;
   }


   for (int col = 0; col < N; col++) {
       if (isSafe(board, row, col)) {
           board[row] = col;
           solveNQueenUtil(board, row + 1, N);
       }
   }
}


void solveNQueens(int N) {
   int board[N];
   solveNQueenUtil(board, 0, N);
}


int main() {
   int N;
   std::cout << "Enter the value of N: ";
   std::cin >> N;
   solveNQueens(N);
   return 0;
}