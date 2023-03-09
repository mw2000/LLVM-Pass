// 2D int array with for loop error in second loop
#include <stdio.h>

int main() {
  int arr[2][2] = {{8, 1}, {9, 14}};
  for (int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
      int value = arr[i][j];
    }
  }
}