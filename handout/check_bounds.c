#include <stdio.h>

/***
** Implement the function below. Function check_bounds takes as input
** the size of the array being accessed, the index of the accessed
** element, and the line number and file in which this access
** occurs. If the access is out of bounds, then the function prints an
** error message.
***/
void check_bounds(long int size, long int index, long int line) {
  printf("SIZE : %ld : INDEX : %ld \n", size, index);
  if (index < 0 || index >= size) {
      //this wont work right now because we dont have file. (char* file)
      //printf("%s:%ld: Array Out of Bounds Error.\n", file, line);
      printf("%ld: Array Out of Bounds Error.\n", line);
  }
  return;
}