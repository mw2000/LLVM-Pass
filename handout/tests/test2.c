#include <stdio.h>

int main() {
  int numbers[3][4];
  for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        numbers[i][j] = j;
    }
  }
  return 0;
}