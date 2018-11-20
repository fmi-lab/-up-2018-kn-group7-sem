#include <iostream>

using namespace std;

const int N = 4;

int main() {
  int A[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }

  bool isDiagonal = true;
  for (int i = 0; isDiagonal && i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i != j && A[i][j] != 0) {
        isDiagonal = false;
        break;
      }
    }
  }

  if (isDiagonal) {
    cout << "YES it is!!!" << endl;
  } else {
    cout << "NOPE" << endl;
  }




  return 0;
}
