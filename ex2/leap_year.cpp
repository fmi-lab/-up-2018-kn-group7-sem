#include <iostream>

using namespace std;

int main() {
  int year;
  cout << "Enter year: ";
  cin >> year;

  // Option 1
  bool isLeap = (year % 400 == 0)
             || (year % 4 == 0 && year % 100 != 0);

             // make it work
             // make it clean == readable
             // make it fast, if need be

  // Option 2
  if (year % 400 == 0) {
    isLeap = true;
  } else if (year % 4 == 0 && year % 100 != 0) {
    isLeap = true;
  }



  if (isLeap) {
    cout << "The year is leap" << endl;
  } else {
    cout << "The year is NOT leap" << endl;
  }

  return 0;
}
