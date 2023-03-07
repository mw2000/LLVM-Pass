#include <stdio.h>

/***
** Implement the function below. Function check_bounds takes as input
** the size of the array being accessed, the index of the accessed
** element, and the line number and file in which this access
** occurs. If the access is out of bounds, then the function prints an
** error message.
***/
void check_bounds(long int size, long int index) {
  if (index < 0 || index >= size) {
      printf("Array Out of Bounds Error.\n");
  }
  return;
}