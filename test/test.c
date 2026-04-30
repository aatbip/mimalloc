#include "mimalloc.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *n = mi_malloc(sizeof(int));
  *n = 22;
  printf("n: %d\n", *n);
  mi_free(n);
  exit(EXIT_SUCCESS);
}
