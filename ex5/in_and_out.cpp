#include <iostream>

using namespace std;

int main() {
  int a[50];
  int n;

  // input
  cout << "Number of elements in the array:";
  cin >> n; // expected to be < 100

  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "] = ";
    cin >> a[i];
  }

  // magic!!!
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  double avg = (n == 0 ? 0 : (double) sum / n);
  // if (n == 0) {
  //   avg = 0;
  // } else {
  //   avg = (double) sum / n)
  // }

  // output
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
  cout << "Sum is: " << sum << endl;
  cout << "AVG is: " << avg << endl;

  return 0;
}
