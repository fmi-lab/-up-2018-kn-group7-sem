#include <iostream>

using namespace std;

int main() {
  long long  y = 42;
  int x = 10;

  int * pointer = &x;
  float * fp = (float *) &x;
  double * dp = (double *) &x;
  void * p = (void *) &x;

  cout << "X = " << x << endl;
  cout << "&X = " << &x << endl;
  cout << "&X+1 = " << (&x + 1) << endl;
  cout << "&Y = " << &y << endl;
  cout << "&Y+1 = " << (&y + 1) << endl;
  cout << "pointer = " << pointer << endl;
  cout << "*pointer = " << *pointer << endl;
  cout << "fp = " << fp << endl;
  cout << "*fp = " << *fp << endl;
  cout << "dp = " << dp << endl;
  cout << "*dp = " << *dp << endl;
  y += 100;
  cout << "*dp = " << *dp << endl;
  // cout << "p = " << p << endl;
  // cout << "p+1 = " << (p + 1) << endl;
  return 0;
}
