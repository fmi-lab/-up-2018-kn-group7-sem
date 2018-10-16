// hello.cpp
#include <iostream>
using namespace std;

// we have cookies here
int main() {
  // integer 4 Bytes 2^32; [-2^31 ... 2^31-1]
  // long long 8 Bytes
  // float 42.13 = 4 Bytes
  // double 42.13 = 8 Bytes
  // char = 'a' = 1 Byte
  int a = 5;
  int b = 257;

  cout << "Enter value for a: ";
  cin >> a;
  cout << "Enter value for b: ";
  cin >> b;

  cout << "The Result is: " << (a + b) << endl;

  return 0;
}
