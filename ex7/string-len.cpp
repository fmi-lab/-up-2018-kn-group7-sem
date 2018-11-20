#include <iostream>

using namespace std;

int main() {
  char str[1000];
  cout << "Type me ...: ";
  // cin >> str;

  cin.getline(str, 1000);

  int length = 0;
  // while (str[length] != '\0') {
  while (str[length]) {
    length++;
  }

  for (int i = 0; str[i]; i++) {
    if ('a' <= str[i] && str[i] <= 'z') {
      str[i] = str[i] - 'a' + 'A';
    }
  }



  cout << "The string length is : " << length << endl;
  cout << "The string is: " << str << endl;

  return 0;
}
