#include <iostream>
#include <cmath>

using namespace std;

bool hasLinearDependentRows(int a[][100], int n, int m) {
  for (int r1 = 0; r1 < n; r1++) {
    for (int r2 = r1 + 1; r2 < n; r2++) {
      double coef = (double) a[r1][0] / a[r2][0];

      bool areLinearDependent = true;
      for (int i = 1; areLinearDependent && i < m; i++) {
        double newCoef = (double) a[r1][i] / a[r2][i];
        if (fabs(coef - newCoef) > 0.000001) {
          areLinearDependent = false;
        }
      }

      if (areLinearDependent) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int a[100][100];
  int n;
  int m;

  cout << "Rows / Cols:";
  cin >> n; // < 100
  cin >> m; // < 100

  cout << "Values for the array: ";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  // Test data KO:
  // 5 4
  // 1 2 3 4 10 20 301 40 5 6 7 8 9 10 11 12 13 14 15 16

  // Test data OK:
  // 5 4
  // 1 2 3 4 10 20 30 40 5 6 7 8 9 10 11 12 13 14 15 16
  if (hasLinearDependentRows(a, n, m)) {
    cout << "YEYYYYYYYY" << endl;
  } else {
    cout << "nope" << endl;
  }


  return 0;
}
