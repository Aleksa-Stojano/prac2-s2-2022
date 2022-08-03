#include <bitset>
#include <iostream>
#include <string>
using namespace std;  // namespace std;

void print_binary_str(string decimal_number) {
  unsigned int decimal = stoi(decimal_number);
  string binary = bitset<8>(decimal).to_string();
  cout << binary << endl;  // 01000001
  return;
}