#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {
  int array2[5] = {1, 3, 3, 2, 1};
  cout << sum_min_max(array2, 5) << endl;
  return 0;
}