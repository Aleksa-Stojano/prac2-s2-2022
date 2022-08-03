#include <math.h>
#include <stdio.h>

#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
  int decimal = 0;
  for (int i = 0; i < number_of_digits; i++) {
    decimal += binary_digits[i] * pow(2, ((number_of_digits - 1) - i));
  }

  return decimal;
}