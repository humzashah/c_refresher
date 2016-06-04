#include <stdio.h> /* for printf */
#include <stdlib.h> /* for exit(0) */

int integer_add (int x, int y) {
  int res;
  res = x + y;
  return res;
}

void main (void) { /* void indicates function doesn't return value */
  int a, b, sum; /* Original C required variables to be hoisted */

  a = 1;
  b = 2;
  sum = integer_add(a, b);

  printf("The addition of %d and %d is %d.\n", a, b, sum);

  exit(0);
}
