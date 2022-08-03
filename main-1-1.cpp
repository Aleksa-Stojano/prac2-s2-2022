#include <stdio.h>

#include <iostream>
using namespace std;
extern int sum_diagonal(int array[4][4]);

int main() {
  int array[4][4] = {{0, 1, 2, 3}, {3, 2, 1, 0}, {3, 5, 6, 1}, {3, 8, 3, 4}};
  cout << sum_diagonal(array) << endl;
  return 0;
}