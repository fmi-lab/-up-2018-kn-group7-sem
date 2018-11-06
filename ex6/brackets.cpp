#include <iostream>

using namespace std;

int main() {
  // Option 1
  bool isCorrect = true;
  int openedBrackets = 0;

  char c;
  cout << "Enter your expression: ";
  do {
    cin >> c;

    if (c == '(') {
      openedBrackets++;
    } else if (c == ')') {
      openedBrackets--;
    }

    if (openedBrackets < 0) {
      isCorrect = false;
      break;
    }
  } while (c != ';');

  isCorrect = isCorrect && (openedBrackets == 0);
  if (isCorrect) {
    cout << "The expression is correct" << endl;
  } else {
    cout << "The expression is NOT correct" << endl;
  }

  // // Option 2
  // char c;
  // do {
  //   cin >> c;
  //   if (c == ';') {
  //     break;
  //   }
  //   // magic!!!
  // } while (c != ';');

  // // Option 3
  // char c;
  // cin >> c;
  // while (c != ';') {
  //   // magic!!!
  //   cin >> c;
  // }

  // // Option 4
  // while (true) {
  //   char c;
  //   cin >> c;
  //   if (c == ';') {
  //     break;
  //   }
  //   // Magic!!!
  // }


  return 0;
}
