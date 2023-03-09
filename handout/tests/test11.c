// 2D double array with for loop
#include <stdio.h>

int main() {
  double arr[2][2] = {{8.2, 1.1}, {9, 14.7}};
  for (int i = 0; i < 3; i++) {
    for(int j = 0; j < 2; j++) {
      double value = arr[i][j];
    }
  }
}