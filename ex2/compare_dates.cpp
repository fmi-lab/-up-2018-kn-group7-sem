#include <iostream>

using namespace std;

int main() {
  int year1, month1, day1;
  int year2, month2, day2;

  cout << "Enter date 1 (yyyy mm dd): ";
  cin >> year1 >> month1 >> day1;

  cout << "Enter date 2 (yyyy mm dd): ";
  cin >> year2 >> month2 >> day2;

  long date1 = 10000 * year1 + 100 * month1 + day1;
  long date2 = 10000 * year2 + 100 * month2 + day2;

  if (date1 < date2) {
    cout << "Date 1 is before date 2" << endl;
  } else if (date2 < date1) {
    cout << "Date 2 is before date 1" << endl;
  } else {
    cout << "Dates are equal" << endl;
  }

  return 0;
}
