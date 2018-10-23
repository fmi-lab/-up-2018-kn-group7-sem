#include<iostream>
#include<cmath>

using namespace std;

int main() {
  long long number;
  cout << "Enter a number: ";
  cin >> number;

  long long x = number;
  int numberOfDigits = 0;
  while (x > 0) {
    numberOfDigits++;
    x /= 10;
  }

  cout << "Number of digits: " << numberOfDigits << endl;
  cout << "With log: " << ((long) log10(number) + 1) << endl;

  return 0;
}
