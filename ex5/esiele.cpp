#include <iostream>

using namespace std;

const int MAX_NUMBER = 2001;

int main() {
  // magic numbers
  bool hasFactors[MAX_NUMBER] = {0}; // !!!

  // hasFactors -> camelCase
  // has_factors -> snake case

  for (int i = 2; i < MAX_NUMBER; i++) {
    if (hasFactors[i]) {
      continue;
    }

    for (int j = i + i; j < MAX_NUMBER; j += i) {
      hasFactors[j] = true;
    }
  }

  for (int i = 2; i < MAX_NUMBER; i++) {
    if (!hasFactors[i]) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
