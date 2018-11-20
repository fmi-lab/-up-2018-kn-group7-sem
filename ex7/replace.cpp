#include <iostream>
// #include <string.h>

using namespace std;

int main() {
  char str[1000];
  char find[100];
  char replace[100];

  cout << "Type me something nice: ";
  cin.getline(str, 1000);

  cout << "Find: ";
  cin.getline(find, 100);

  cout << "Replace: ";
  cin.getline(replace, 100);

  cout << strlen(str) << endl;
  cout << strlen(find) << endl;
  cout << strlen(replace) << endl;

  int lenStr = strlen(str);
  int lenFind = strlen(find);
  int lenReplace = strlen(replace);

  if (lenFind != lenReplace) {
    cout << "NOT IMPLEMENTED YET!!!" << endl;
    return 1;
  }

  // guard statement


  for (int i = 0; i < lenStr - lenFind; i++) {
    bool isMatch = true;
    for (int j = 0; j < lenFind; j++) {
      if (str[i + j] != find[j]) {
        isMatch = false;
        break;
      }
    }

    if (isMatch) {
      for (int j = 0; j < lenFind; j++) {
        str[i + j] = replace[j];
      }
    }
  }



  cout << "The new text is: " << str << endl;
  return 0;
}














