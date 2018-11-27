#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // isSmall d2 d3
  int answer[2][2][2] = { // isSmall
    { // isSmall = false -> 4-6
      { // d2 = false
        5, // d3 = false
        -1  // d3 = true
      },
      { // d2 = true
        4, // d3 = false
        6  // d3 = true
      }
    },
    { // isSmall = true -> 1-3
      { // d2 = false
        1, // d3 = false
        3  // d3 = true
      },
      { // d2 = true
        2, // d3 = false
        -1  // d3 = true
      }
    },
  };

  bool isSmall, d2, d3;
  cin >> isSmall;
  cin >> d2;
  cin >> d3;

  cout << "The answer is: " << answer[isSmall][d2][d3] << endl;

  return 0;
}
