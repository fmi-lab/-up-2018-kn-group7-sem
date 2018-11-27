#include <iostream>

using namespace std;

int main () {
  int a[100][100];
  int n, m;
  cout << "N,m: ";
  cin >> n >> m;

  cout << "Array values: ";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  bool foundIt = false;
  for (int i = 0; !foundIt && i < n; i++) {
    for (int j = 0; !foundIt && j < m; j++) {

      int sum = 0;
      int neighbours = 0;
      for (int dI = -1; dI <= 1; dI++) { // -1 .. 1
        for (int dJ = -1; dJ <= 1; dJ++) { // -1 .. 1
          if (0 <= i + dI && i + dI < n && 0 <= j + dJ && j + dJ < m) {
            sum += a[i + dI][j + dJ];
            neighbours++;
          }
        }
      }

      if (sum == a[i][j] * neighbours) {
        foundIt = true;
      }
    }
  }

  if (foundIt) {
    cout << "YEsssssssss" << endl;
  } else {
    cout << "no no no" << endl;
  }

}
