#include<iostream>
#include<cmath>

using namespace std;

// 04. Всички прости делители на едно число
int main() {
  long number;
  cout << "Enter a number: ";
  cin >> number;

  for (long divider = 2; divider <= number; divider++) {
    cout << "Testing divider: " << divider << endl;
    if (number % divider != 0) {
      continue;
    }

    cout << "Checking divider: " << divider << endl;
    bool isDividerPrime = true;
    for (long i = 2; i <= sqrt(divider); i++) {
      if (divider % i == 0) {
        isDividerPrime = false;
        break;
      }
    }

    cout << "isDividerPrime: " << isDividerPrime << endl;
    if (isDividerPrime) {
      cout << divider << " ";
    }
  }
  cout << endl;


  return 0;
}
