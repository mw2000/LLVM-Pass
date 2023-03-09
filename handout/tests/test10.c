// 2D int array with out of bounds in 1st loop
#include <stdio.h>

int main() {
  int arr[2][2] = {{8, 1}, {9, 14}};
  for (int i = 0; i < 3; i++) {
    for(int j = 0; j < 2; j++) {
      int value = arr[i][j];
    }
  }
}