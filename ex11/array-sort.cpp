#include <iostream>
#include <cmath>

using namespace std;

/*
  Write a function to sort array elements in ascending order.
  Write a function to sort even and odd elements of array separately.
*/
// FAKE NEWS!
void sortAsc() {
  int a[1000];
  int n;
  cin >> n;

  // magic ...
  for (int i = 0; i < n; i++) {
  }

  // output
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

// void sortAsc(int a[], int n, int start = 0)
void sortAsc(int a[], int start, int n) {
  for (int i = start; i < n; i++) {
    int minPos = i;
    for (int j = i + 1; j < n; j++) {
      if (a[minPos] > a[j]) {
        minPos = j;
      }
    }

    int temp = a[i];
    a[i] = a[minPos];
    a[minPos] = temp;
  }
}

// Overloading
void sortAsc(int a[], int n) {
  sortAsc(a, 0, n);
}

int findLastOdd(int a[], int start, int end) {
  for (int i = start; i < end; i++) {
    if (a[i] % 2 != 1) {
      return i;
    }
  }
  return end;
}

int findLastEven(int a[], int start, int end) {
  for (int i = start - 1; i >= end; i--) {
    if (a[i] % 2 != 0) {
      return i;
    }
  }
  return end;
}

int splitOddAndEven(int a[], int n) {
  int lastOdd = findLastOdd(a, 0, n);
  int lastEven = findLastEven(a, n, 0);
  while (lastOdd < lastEven) {
    swap(a[lastOdd], a[lastEven]);
    lastOdd = findLastOdd(a, lastOdd, lastEven);
    lastEven = findLastEven(a, lastEven, lastOdd);
  }
  return lastOdd;
}

void sortOddEven(int a[], int n) {
  int oddN = splitOddAndEven(a, n);
  sortAsc(a, oddN);
  sortAsc(a, oddN, n);
}

void printArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int test1[100] = {4, 1, 3, 2, 5};
  int test2[100] = {7, 1, 3, 2, 5};
  int test3[100] = {1, 2, 4, 5, 7, 8, 8, 10, 4, 5, 6, 8};
  int n = 5;

  sortAsc(test1, n, 2);
  printArray(test1, n);

  sortOddEven(test1, n);
  printArray(test1, n);

  sortOddEven(test2, n);
  printArray(test2, n);

  sortOddEven(test3, 12);
  printArray(test3, 12);

  return 0;
}


