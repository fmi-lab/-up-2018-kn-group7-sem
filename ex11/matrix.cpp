#include <iostream>

using namespace std;
/*

*/
// FAKE NEWS!!!
void solution() {
  int a[100][100];
  int n, m;

}

bool isWordMatch(char text[], int start, char word[]) {
  int wordLen = strlen(word);
  for (int i = 0; i < wordLen; i++) {
    if (text[start + i] != word[i]) {
      return false;
    }
  }
  return true;
}

int numberOfOccurrences(char text[], char word[]) {
  int textLen = strlen(text);
  int occurrences = 0;
  for (int i = 0; i <= textLen; i++) {
    if (isWordMatch(text, i, word)) {
      occurrences++;
    }
  }
  return occurrences;
}

int main() {
  return 0;
}
