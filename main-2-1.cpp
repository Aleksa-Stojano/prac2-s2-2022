#include <iostream>

using namespace std;

extern void print_binary_str(string decimal_number);

int main() {
  string decimal;
  cin >> decimal;
  print_binary_str(decimal);
  return 0;
}