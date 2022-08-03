
#include <iostream>
using namespace std;
extern int count_digits(int array[4][4]);

int main() {
  int array[4][4] = {{0, 1, 2, 3}, {3, 2, 1, 0}, {3, 5, 6, 1}, {3, 8, 3, 4}};
  count_digits(array);
  return 0;
}