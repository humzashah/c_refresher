#include <stdio.h>
#include <stdlib.h>

int integer_add (int x, int y) {
  int res;
  res = x + y;

  /* exiting here instead of returning would halt the process */
  return res;
}

/* void in paranthesis means that function takes no arguments */
void main (void) {
  /* Original C required variables to be hoisted */
  int a, b;
  a = 1;
  b = 2;

  /* same line declaration and assignment is also (now) acceptable in C */
  int sum = integer_add(a, b);

  /* %d denotes a signed decimal number */
  printf("The sum of %d and %d is %d.\n", a, b, sum);

  exit(0);
}
