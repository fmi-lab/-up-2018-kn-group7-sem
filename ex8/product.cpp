#include <iostream>

using namespace std;

int main() {
  double A[2][3];
  double B[3][2];
  double C[2][2];

  // input
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Enter value A[" << i << "][" << j << "]: ";
      cin >> A[i][j];
    }
  }
  cout << endl << endl << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "Enter value B[" << i << "][" << j << "]: ";
      cin >> B[i][j];
    }
  }
  cout << endl << endl << endl;

  // magic
  // C[0][0] = A[0][0] * B[0][0] +
  //           A[0][1] * B[1][0] +
  //           A[0][2] * B[2][0];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      C[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Ouput
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }


  return 0;
}
