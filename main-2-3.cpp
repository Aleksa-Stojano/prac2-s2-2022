#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main() {
  int array2[5] = {1, 3, 3, 2, 1};
  cout << sum_if_palindrome(array2, 5) << endl;
  return 0;
}