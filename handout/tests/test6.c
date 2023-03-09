// 1D struct array
#include <stdio.h>

typedef struct {
  int numbers[3];
} MyStruct;

int main() {
  MyStruct s = {{1, 2, 3}};
  int x = s.numbers[3];
  return 0;
}
