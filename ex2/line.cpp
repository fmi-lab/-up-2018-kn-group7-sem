// google: header files
// google: implicit cast
// google: Debug statements
#include <iostream>

using namespace std;

// Проверка дали точка лежи на права
int main() {
  double Xp, Yp;

  cout << "Enter value Xp: ";
  cin >> Xp;

  cout << "Enter value Yp: ";
  cin >> Yp;

// (0.5 * Xp + 0.5) - Yp <= 0.000000001
  if (0.5 * Xp + 0.5 == Yp) {
    cout << "The point is on the line" << endl;
  } else {
    cout << "The point is NOT on the line" << endl;
  }

  // TODO: google double issue

  return 0;
}
