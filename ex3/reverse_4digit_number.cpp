#include<iostream>

using namespace std;

// Да се изведе 4 цифрено число в обратен ред
int main() {
  // input
  int number;
  cout << "Enter a 4-digit number: ";
  cin >> number;

  // magic goes here ...
  int d1 = number % 10;
  int d2 = number % 100 / 10;
  int d3 = number % 1000 / 100;
  int d4 = number / 1000;

  int reversedNumber = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
  // ... end of magic

  // more magic
  cout << "More magic to reverse: ";

  cout << number % 10; // last digit
  number /= 10; // number = number / 10;

  cout << number % 10; // second to last digit
  number /= 10;

  cout << number % 10;
  number /= 10;

  cout << number % 10;
  number /= 10;

  // end of more magic

  // ouput
  cout << "Reversed: " << reversedNumber << endl;


  return 0;
}
