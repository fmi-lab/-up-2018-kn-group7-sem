#include <iostream>

using namespace std;

/*
01. Replace string in a string
01.1 - same length
  text: al ala bala a keks al
  replace: ala
  with: xxx
  -> al xxx bxxx a keks al

01.2 - same length or shorter
  text: ala bala a keks
  replace: ala
  with: XX
  XX bXX a keks


01.3 - new text is longer
  text: ala bala a keks
  replace: ala
  with: XXXX
  XXXX bXXXX a keks
*/

bool isTextAMatch2(char * str, char * word) {
  while (*word) {
    if ( *str != *word ) {
      return false;
    }
    word++;
    str++;
  }
  return true;
}

bool isTextAMatch(char * str, char * word) {
  for (int i = 0; *(word + i); i++) {
    if ( *(str + i) != *(word + i) ) {
      return false;
    }
  }
  return true;
}

void doReplace(char * str, char * word) {
  for (int i = 0; *(word + i); i++) {
    *(str + i) = *(word + i);
  }
}

void shiftLeft(char str[], int step) {
  int i = 0;
  for (; str[step + i]; i++) {
    str[i] = str[step + i];
  }
  str[i] = str[step + i];
}

void replaceIfMatched(char * str, char * oldWord, char * newWord) {
  if (isTextAMatch(str, oldWord)) {
    doReplace(str, newWord);

    int oldWordLen = strlen(oldWord);
    int newWordLen = strlen(newWord);
    if (oldWordLen > newWordLen) {
      shiftLeft(str + newWordLen, oldWordLen -  newWordLen);
    }
  }
}


int main() {
  // -
  char text[100];
  cout << "Dai mi tekst: " << endl;
  cin.getline(text, 100);

  char replaceWord[100];
  char replaceWordWith[100];

  cout << "Replace Word:" << endl;
  cin.getline(replaceWord, 100);
  cout << "Replace Word With:" << endl;
  cin.getline(replaceWordWith, 100);

  // al ala bala a keks al
  // ala bala -> skalata
  // *(text + i) == text[i]
  for (int i = 0; *(text + i); i++) {
    replaceIfMatched(text + i, replaceWord, replaceWordWith);
    // (text + i) == &text[i]
  }

  cout << text << endl;




  return 0;
}




