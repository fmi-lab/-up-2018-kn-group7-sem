#include <iostream>

using namespace std;
/*
  Write a function to count occurrences of a word in a given string.
*/
// FAKE NEWS!!!
void numberOfOccurrences() {
  char text[1000];
  cin.getline(text, 1000);

  char word[100];
  cin.getline(word, 100);

  int n = 0;
  /// .... magic

  cout << n;
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
  char text1[] = "ala bala nitsa";
  char word1[] = "ala";
  char word2[] = "bala";
  char word3[] = "balaa";
  char word4[] = "a";
  cout << "ala bala nitsa ## ala   ## 2 == " << numberOfOccurrences(text1, word1) << endl;
  cout << "ala bala nitsa ## bala  ## 1 == " << numberOfOccurrences(text1, word2) << endl;
  cout << "ala bala nitsa ## balaa ## 0 == " << numberOfOccurrences(text1, word3) << endl;
  cout << "ala bala nitsa ## a     ## 5 == " << numberOfOccurrences(text1, word4) << endl;
  return 0;
}
