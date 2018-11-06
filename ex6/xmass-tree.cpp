#include <iostream>

using namespace std;
/*
        X         1
      XXXXX       5
    XXXXXXXXX     9

      XXXXX       5
    XXXXXXXXX     9
  XXXXXXXXXXXXX   13

    XXXXXXXXX     9
  XXXXXXXXXXXXX   13
XXXXXXXXXXXXXXXXX 17

       XXX
       XXX
       XXX
       XXX
*/


int main() {
/*
X         1
XXXXX       5
XXXXXXXXX     9
*/

/*
        X         1
      XXXXX       5
    XXXXXXXXX     9
*/

// stef.vartolomeev@gmail.com
/*
X         1
XXXXX       5
XXXXXXXXX     9

XXXXX       5
XXXXXXXXX     9
XXXXXXXXXXXXX   13

XXXXXXXXX     9
XXXXXXXXXXXXX   13
XXXXXXXXXXXXXXXXX 17
*/
  int sectionCount = 5;
  int largestLineSize = 9 + (sectionCount - 1) * 4;

  for (int section = 0; section < sectionCount; section++) {
    int startLineSize = 1 + section * 4;
    int maxLineSize = 9 + section * 4;

    for (int lineSize = startLineSize; lineSize <= maxLineSize; lineSize+= 4) {
      int lineOffest = (largestLineSize - lineSize) / 2;

      for (int i = 0; i < lineOffest; i++) {
        cout << " ";
      }
      for (int i = 0; i < lineSize; i++) {
        cout << "X";
      }
      cout << endl;
    }
  }

  int baseWidth = 3;
  for (int i = 0; i <= sectionCount; i++) {
    int lineOffest = (largestLineSize - baseWidth) / 2;
    for (int i = 0; i < lineOffest; i++) {
      cout << " ";
    }

    for (int i = 0; i < baseWidth; i++) {
      cout << "X";
    }
    cout << endl;
  }


  return 0;
}
