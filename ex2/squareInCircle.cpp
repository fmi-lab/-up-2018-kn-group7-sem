#include <iostream>

using namespace std;

// Проверка дали точка лежи вътре в окръжност
// но не и в квадрат.
int main() {
  double Xp, Yp;

  cout << "Enter value Xp: ";
  cin >> Xp;

  cout << "Enter value Yp: ";
  cin >> Yp;

  double x = Xp;
  double y = Yp;
  double r = 2;

  bool isInCircle = x*x + y*y <= r*r;
  bool isInSquare = (-1 <= Xp && Xp <= 1)
                 && (-1 <= Yp && Yp <= 1);

  if ( isInCircle && !isInSquare) {
    cout << "The point is on the circle" << endl;
  } else {
    cout << "The point is NOT on the circle" << endl;
  }

  return 0;
}
