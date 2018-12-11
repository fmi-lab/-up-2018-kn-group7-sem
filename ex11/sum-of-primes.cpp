#include <iostream>
#include <cmath>

using namespace std;

/*
  Write a function to find sum of all prime numbers between 1 to n.
*/
// FAKE NEWS!
void sumOfAllPrimes() {
  int n;
  cout << "Enter value for n: ";
  cin >> n;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += i;
  }

  cout << "The sum is " << sum << endl;
}

bool isPrime(int x) {
  int n = (int) sqrt(x);

  for (int i = 2; i <= n; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int sumOfAllPrimes(int n) {
  int sum = 0;
  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      sum += i;
    }
  }

  return sum;
}

int main() {
  cout << " 2:  2 == " << sumOfAllPrimes(2) << endl;
  cout << " 3:  5 == " << sumOfAllPrimes(3) << endl;
  cout << "10: 17 == " << sumOfAllPrimes(10) << endl;
  return 0;
}


