#include<iostream>

using namespace std;

int stringlen(const char * str) {
  if (*str == 0) {
    return 0;
  }
  return 1 + stringlen(str + 1);
}

int factorial(int n) {
  if (n < 0) {
    return -1;
  }

  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

// n == 0 ???
// n == 1 (1, 1)
// n == 2 (2, 2) -> (1, 2)
// n == 5 (5, 5) -> (4, 20) -> (3, 60) -> (2, 120) -> (1, 120)
int tailFactorial(int n, int fact) {
  if (n == 1) {
    return fact;
  }
  tailFactorial(n - 1, fact * (n - 1));
}
/*
int fact = n;
while (n > 0) {
  fact = fact * (n - 1);
  n--;
}
*/

int tailFactorial(int n) {
  if (n < 0) {
    return -1;
  }
  if (n == 0) {
    return 1;
  }
  tailFactorial(n, n);
}

int main() {
  char multipleTerminatingNulls[] = { 'a','l','a','\0','b','\0','b','a','\0','l','a' };
  cout << "7 == " << stringlen("alabala") << endl;
  cout << "7 == " << stringlen("ala ala") << endl;
  cout << "0 == " << stringlen("") << endl;
  cout << "3 == " << stringlen(multipleTerminatingNulls) << endl;

  cout << "  1 == " << factorial(0) << endl;
  cout << "  1 == " << factorial(1) << endl;
  cout << "  2 == " << factorial(2) << endl;
  cout << "120 == " << factorial(5) << endl;
  return 0;
}
