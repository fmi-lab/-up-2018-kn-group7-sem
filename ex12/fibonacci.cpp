#include<iostream>

using namespace std;


int fibWithLoop(int n) {
  if (n == 0) {
    return 0;
  }

  int fibN1 = 1;
  int fibN2 = 0;

  for (int i = 0; i < n; i++) {
    fibN = fibN1 + fibN2;
    fibN2 = fibN1;
    fibN1 = fibN;
  }

  return fibN1;
}

int fib2(int n, fibn1, fibn2) {
  if (n == 0) {
    return fibn1;
  }
  return fib2(n - 1, fibn1 + fibn2, fibn1);
}

int fib2(int n) {
  if (n == 0) {
    return 0;
  }
  return fib2(n, 1, 0);
}

int fib(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int main() {

  cout << "5: " << fib(5) << endl;
  cout << "6: " << fib(6) << endl;
  cout << "7: " << fib(7) << endl;
  cout << "8: " << fib(8) << endl;
  cout << "9: " << fib(9) << endl;
  // cout << fib(13) << endl;
  // cout << fib(20) << endl;

  return 0;
}
