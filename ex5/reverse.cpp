#include <iostream>

using namespace std;

int main() {
  double a[50];
  double b[50];
  int n;

  // input
  cout << "Number of elements in the array:";
  cin >> n; // expected to be < 100

  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "] = ";
    cin >> a[i];
  }

  // reverse
  // Option 1
  // for (int i = n - 1, j = 0; i >= 0; i--, j++) {
  //   b[j] = a[i];
  // }

  // Option 2
  // for (int i = n - 1; i >= 0; i--) {
  //   b[n - i - 1] = a[i];
  //   // n - (n-1) - 1 = 0
  //   // n - (0) - 1 = n - 1
  // }

  // Option 3
  // for (int i = 0; i < n; i++) {
  //   b[i] = a[n - i - 1];
  // }

  // // After Option 1, 2, and 3
  // for (int i = 0; i < n; i++) {
  //   a[i] = b[i];
  // }

  // Option 4
  for (int i = 0; i < n / 2; i++) {
    double buf = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = buf;
  }

  // output
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }

  return 0;
}
