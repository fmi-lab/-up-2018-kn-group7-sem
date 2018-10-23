#include<iostream>
#include<cmath>

using namespace std;

int main() {
  long number;
  cout << "Enter a number: ";
  cin >> number;

  bool isPrime = true;
  long maxDivider = (long) sqrt(number);
  for (long i = 2; isPrime && i <= maxDivider; i++) {
    cout << "Checking with: " << i << endl;
    if (number % i == 0) {
      isPrime = false;
    }
  }

  if (isPrime) {
    cout << "The number is prime" << endl;
  } else {
    cout << "The number is NOT prime" << endl;
  }

  return 0;
}
