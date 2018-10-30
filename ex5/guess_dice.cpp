#include <iostream>

using namespace std;

int main() {
  bool isSmall, dividesBy2, dividesBy3;
  cout << "Is small? (0 = false, 1 = true): ";
  cin >> isSmall;

  cout << "Divides by 2?: ";
  cin >> dividesBy2;

  cout << "Divides by 3?: ";
  cin >> dividesBy3;

  // int number = -1;
  // if (isSmall) {
  //   if (dividesBy2 && dividesBy3) number = -1;
  //   else if (dividesBy2 ) number = 2;
  //   else if (dividesBy3) number = 3;
  //   else number = 1;
  // } else {
  //   if (dividesBy2 && dividesBy3) number = 6;
  //   else if (dividesBy2) number = 4;
  //   else if (dividesBy3) number = -1;
  //   else number = 5;
  // }
  int values[8] = {5, -1, 4, 6, 1, 3, 2, -1 };

  int index =
    4 * isSmall +
    2 * dividesBy2 +
    dividesBy3;

  int number = values[index];

  cout << "Your number is: " << number << endl;
  return 0;
}
