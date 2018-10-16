#include<iostream>

using namespace std;

// Да се изведе произволно число в обратен ред
int main() {
  // input
  int number;
  cout << "Enter any number: ";
  cin >> number;

  int reversedNumber = 0;
  while (number != 0) {
    reversedNumber *= 10; // reversedNumber = reversedNumber * 10;
    reversedNumber += number % 10;

    number /= 10;
  }

  cout << "Reversed number is: " << reversedNumber << endl;
  return 0;
}
