#include <stdio.h>

int main() {
  int numbers[3][4][5];
  for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 5; k++) {
        numbers[i][j][k] = k;
      }
    }
  }
  return 0;
}