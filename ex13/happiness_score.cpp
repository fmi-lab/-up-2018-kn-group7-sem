#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

/*

Напишете програма, която прочита от стандартния вход tweet и връща happiness score-а му.

Конфигурацията на програмата трябва да включва:
  - речник с думи и техния happiness score (double).
  - списък с думи, които са отрицания

Happiness Score Calculation
--- --- --- --- --- --- ---
Ако дадена дума не е част от речника, нейният happiness score е 0.

Ако преди дадена дума имаме отрицание, обръщаме знака на найния happiness score.

Happiness score-а на един tweet е сумата на happiness score-а на всяка дума в него.

Ако score-ът е положителен, изведете ":)"
Ако score-ът е отрицателен, изведете ":("
Ако score-ът е 0, изведете ":|"

*/

const char* words[] = {
  "good",
  "bad",
  "happy",
  "unhappy",
};

double wordsHappinessScore[] = {
  1,
  -1,
  1.1,
  -0.9
};

const int SCORED_WORDS_COUNT = 4;

const char* negations[] = {
  "no",
  "not"
};

const int NEGATIONS_COUNT = 2;

const char * findNextWord(const char * text, char * word) {
  while (*text == ' ' || *text == ',') {
    text++;
  }

  const char * wordStart = text;
  if (*wordStart == '\0') {
    return NULL;
  }

  while (*text != '\0' && *text != ' ' && *text != ',') {
    text++;
  }

  int wordLength = text - wordStart;
  strncpy(word, wordStart, wordLength);
  word[wordLength] = '\0';

  return text;
}

double happinessScore(const char * word) {
  for (int i = 0; i < SCORED_WORDS_COUNT; i++) {
    if (strcmp(word, words[i]) == 0) {
      return wordsHappinessScore[i];
    }
  }
  return 0.0;
}

bool isNegation(const char * word) {
  for (int i = 0; i < NEGATIONS_COUNT; i++) {
    if (strcmp(word, negations[i]) == 0) {
      return true;
    }
  }
  return false;
}

double calculateHappinessScore(const char * text) {
  double score = 0.0;

  char word[140];
  bool isLastWordNegation = false;
  for (const char * endOfWord; NULL != (endOfWord = findNextWord(text, word)); text = endOfWord) {

    if (isNegation(word)) {
      isLastWordNegation = true;
      continue;
    }

    double wordScore = happinessScore(word);
    if (isLastWordNegation) {
      wordScore = -wordScore;
      isLastWordNegation = false;
    }

    score += wordScore;
  }

  // for each word from the text/tweet
  //  if word is negation, raise a flag
  //  calculate the happiness score
  //  if previous word is negation, invert the sign of the score
  //  sum it up with the total score
  return score;
}

// TDD
// Test Drive Development
void assertHappinessScore(double expectedScore, const char* tweet) {
  double actualScore = calculateHappinessScore(tweet);

  if (fabs(actualScore - expectedScore) < 0.000000001) {
    cout << "[OK ] ";
  } else {
    cout << "[ERR] ";
  }

  cout << expectedScore << " == " << actualScore << endl;
}

int main() {
  assertHappinessScore(1.1, "happy");
  assertHappinessScore(-1, "bad");
  assertHappinessScore(0.1, "happy bad");
  assertHappinessScore(0, "ala bala");
  assertHappinessScore(0, "");
  assertHappinessScore(0, "goodness");
  assertHappinessScore(0, "notgood");
  assertHappinessScore(0, "notbadd");
  assertHappinessScore(0.2, "the good, the bad, the happy and unhappy");
  assertHappinessScore(-1, "not good");
  assertHappinessScore(1, "not bad");
  assertHappinessScore(2, "That's not bad at all. It's pretty good actually");
  return 0;
}
