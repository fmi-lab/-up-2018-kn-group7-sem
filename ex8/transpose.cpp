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

  // Magic - to transpose
  // Option 1 - над главния диагонал
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int temp = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = temp;
    }
  }

  // Option 2 - под главния диагонал
  // for (int i = 0; i < N; i++) {
  //   for (int j = 0; j < i; j++) {
  //     int temp = A[i][j];
  //     A[i][j] = A[j][i];
  //     A[j][i] = temp;
  //   }
  // }


  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }


  return 0;
}
