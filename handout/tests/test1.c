#include <stdio.h>

int main() {
  double arr[2][3] = {{2.2, 2.5, 1.4}, {5.5, 5.8, 9.7}};

  // valid
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      double value = arr[i][j];
    }
  }

  // invalid
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      double value = arr[i][j];
    }
  }

  return 0;
}
