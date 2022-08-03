#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);
int main() {
  int binary[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,
                  0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1};
  int decimal = binary_to_int(binary, 24);
  cout << decimal << endl;
  return 0;
}
