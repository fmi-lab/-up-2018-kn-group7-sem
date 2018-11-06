#include <iostream>

using namespace std;

int main() {
  bool isCorrect = true;
  int openedSmallBrackets = 0;
  int openedMediumBrackets = 0;
  int openedLargeBrackets = 0;

  char c;
  cout << "Enter your expression: ";
  do {
    cin >> c;

    if (c == '(') {
      openedSmallBrackets++;

    } else if (c == ')') {
      openedSmallBrackets--;

    } else if (c == '[') {
      openedMediumBrackets++;

      if (openedSmallBrackets > 0) {
        isCorrect = false;
        break;
      }
    } else if (c == ']') {
      openedMediumBrackets--;

      if (openedSmallBrackets > 0) {
        isCorrect = false;
        break;
      }

    } else if (c == '{') {
      openedLargeBrackets++;

      if (openedSmallBrackets > 0 || openedMediumBrackets > 0) {
        isCorrect = false;
        break;
      }

    } else if (c == '}') {
      openedLargeBrackets--;

      if (openedSmallBrackets > 0 || openedMediumBrackets > 0) {
        isCorrect = false;
        break;
      }
    }

    if (openedSmallBrackets < 0
      || openedMediumBrackets < 0
      || openedLargeBrackets < 0) {
      isCorrect = false;
      break;
    }
  } while (c != ';');

  isCorrect = isCorrect
    && (openedSmallBrackets == 0)
    && (openedMediumBrackets == 0)
    && (openedLargeBrackets == 0);

  if (isCorrect) {
    cout << "The expression is correct" << endl;
  } else {
    cout << "The expression is NOT correct" << endl;
  }

  return 0;
}
