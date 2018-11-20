#include <iostream>

using namespace std;

const int MAX_NUMBERS = 1000;

/*
01. K smallest number in an array
*/
int main() {

  int a[MAX_NUMBERS];

  int n;
  cout << "n=";
  cin >> n;

  int k;
  cout << "k=";
  cin >> k;

  for (int i = 0; i < n; i++) {
    cout << "a[i]: ";
    cin >> a[i];
  }

  for (int j = 0; j < k; j++) {
    int minI = 0;

    for (int i = 1; i < n - j; i++) {
      if (a[i] < a[minI]) {
        minI = i;
      }
    }

    // a[i] ^= a[minI] ^= a[i]; // XOR
    int lastPosition = n - 1 - j;

    int temp = a[lastPosition];
    a[lastPosition]= a[minI];
    a[minI] = temp;

    cout << endl;
    cout << a[lastPosition] << endl;
  }


  return 0;
}












