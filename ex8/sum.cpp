#include <iostream>

using namespace std;

int main() {
  double A[2][3];
  double B[2][3];
  double C[2][3]; // C = A + B

  // input
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Enter value A[" << i << "][" << j << "]: ";
      cin >> A[i][j];
    }
  }
  cout << endl << endl << endl;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Enter value B[" << i << "][" << j << "]: ";
      cin >> B[i][j];
    }
  }
  cout << endl << endl << endl;

  // magic
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  // Ouput
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }


  return 0;
}
