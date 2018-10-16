#include <iostream>

using namespace std;

// Проверка дали точка лежи на окръжност
// и е в първи квадрант
int main() {
  double Xp, Yp;

  cout << "Enter value Xp: ";
  cin >> Xp;

  cout << "Enter value Yp: ";
  cin >> Yp;

  double x = Xp - 3;
  double y = Yp - 3;
  double r = 2;

  bool isInCircle = x*x + y*y <= r*r;
  bool isInQ1 = Xp >= 3 && Yp >= 3;

  if ( isInCircle && isInQ1) {
    cout << "The point is on the circle" << endl;
  } else {
    cout << "The point is NOT on the circle" << endl;
  }

  return 0;
}
