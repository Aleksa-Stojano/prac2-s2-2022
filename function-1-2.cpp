#include <iostream>

int is_identity(int array[10][10]) {
  int counter = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (j == i && array[i][j] == 1) {
        counter += 1;
      } else if (j != i && array[i][j] == 0) {
        counter += 1;
      }
    }
  }
  if (counter == 10 * 10) {
    return 1;
  }
  return 0;
}