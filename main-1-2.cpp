#include <stdio.h>

#include <iostream>
using namespace std;
extern int is_identity(int array[10][10]);

int main() {
  int array[10][10] = {{1, 0, 0, 0}, {3, 2, 1, 0}, {3, 5, 6, 1}, {3, 8, 3, 4},
                       {3, 2, 1, 0}, {3, 5, 6, 1}, {3, 8, 3, 4}, {3, 2, 1, 0},
                       {3, 5, 6, 1}, {3, 8, 3, 4}};
  cout << is_identity(array) << endl;
  return 0;
}