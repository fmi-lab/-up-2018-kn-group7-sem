#include<iostream>
#include<cmath>

using namespace std;

int main() {
  int number, power;

  cout << "Enter number & power: ";
  cin >> number;
  cin >> power;

  int result = 1;
  for (int i = 0; i < power; i++) {
    result *= number;
  }

  cout << "The result is: " << result << endl;
  return 0;
}
