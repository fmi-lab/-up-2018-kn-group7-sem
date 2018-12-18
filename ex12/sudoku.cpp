#include<iostream>

using namespace std;

bool isValidSquare(int sudoku[9][9], int x, int y) {
  int digits[10] = {0};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (sudoku[x + i][y + j] == 0) {
        continue;
      }
      digits[sudoku[x + i][y + j]]++;
      if (digits[sudoku[x + i][y + j]] > 1) {
        return false;
      }
    }
  }

  return true;
}

bool hasValidSquares(int sudoku[9][9]) {
  for (int i = 0; i < 9; i += 3) {
    for (int j = 0; j < 9; j += 3) {
      if (!isValidSquare(sudoku, i, j)) {
        return false;
      }
    }
  }
  return true;
  // 0, 0 ... 0, 3 .... 0, 6
  // 3, 0 ... 3, 3 .... 3, 6
  // 6, 0 ... 6, 3 .... 6, 6
}

bool hasValidCols(int sudoku[9][9]) {
  for (int j = 0; j < 9; j++) {
    int digits[10] = {0};
    for (int i = 0; i < 9; i++) {
      if (sudoku[i][j] == 0) {
        continue;
      }
      digits[sudoku[i][j]]++;
      if (digits[sudoku[i][j]] > 1) {
        return false;
      }
    }
  }
  return true;
}

bool hasValidRows(int sudoku[9][9]) {
  for (int i = 0; i < 9; i++) {
    int digits[10] = {0};
    for (int j = 0; j < 9; j++) {
      if (sudoku[i][j] == 0) {
        continue;
      }
      digits[sudoku[i][j]]++;
      if (digits[sudoku[i][j]] > 1) {
        return false;
      }
    }
  }
  return true;
}

bool isValidSolution(int sudoku[9][9]) {
  return hasValidRows(sudoku)
      && hasValidCols(sudoku)
      && hasValidSquares(sudoku);
}

bool solve(int sudoku[9][9], int i, int j) {
  if (i == 9) {
    return isValidSolution(sudoku);
  }
  if (sudoku[i][j] == 0) {
    for (int x = 1; x <= 9; x++) {
      sudoku[i][j] = x;
      if (isValidSolution(sudoku)){
        if (solve(sudoku, i + (j + 1) / 9, (j + 1) % 9)) {
          return true;
        }
      }
    }
    sudoku[i][j] = 0;
    return false;
  } else {
    return solve(sudoku, i + (j + 1) / 9, (j + 1) % 9);
  }
}

void solve(int sudoku[9][9]) {
  solve(sudoku, 0, 0);
}

void print(int sudoku[9][9]) {
  for (int i = 0; i < 9; i++) {
    if (i % 3 == 0) {
      cout << "|-------|-------|-------|" << endl;
    }
    for (int j = 0; j < 9; j++) {
      if (j % 3 == 0) {
        cout << "| ";
      }
      if (sudoku[i][j] == 0) {
        cout << "_ ";
      } else {
        cout << sudoku[i][j] << " ";
      }

    }
    cout << "|" << endl;
  }
  cout << "|-------|-------|-------|" << endl;
}

int main() {
  int sudoku[9][9] = {
    {5, 3, 0,  0, 7, 0,  0, 0, 0},
    {6, 0, 0,  1, 9, 5,  0, 0, 0},
    {0, 9, 8,  0, 0, 0,  0, 6, 0},

    {8, 0, 0,  0, 6, 0,  0, 0, 3},
    {4, 0, 0,  8, 0, 3,  0, 0, 1},
    {7, 0, 0,  0, 2, 0,  0, 0, 6},

    {0, 6, 0,  0, 0, 0,  2, 8, 0},
    {0, 0, 0,  4, 1, 9,  0, 0, 5},
    {0, 0, 0,  0, 8, 0,  0, 7, 9}
  };
  print(sudoku);
  solve(sudoku);
  cout << endl;
  cout << endl;
  cout << "Solution" << endl;
  print(sudoku);
  return 0;
}
