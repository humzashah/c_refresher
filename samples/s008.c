/* calculating factorial in 2 different ways */

#include<stdio.h>
#include<stdlib.h>

int factorial_with_recursion (int a);
int factorial_with_loop (int a);

void main (void) {
  int number = 6;

  int factorial_wr = factorial_with_recursion (number);
  printf("Factorial of %d with recursion: %d\n", number, factorial_wr);
  /*
    Output:
    => Factorial of 6 with recursion: 720
  */

  int factorial_wl = factorial_with_loop (number);
  printf("Factorial of %d with loop: %d\n", number, factorial_wl);
  /*
    Output:
    => Factorial of 6 with loop: 720
  */

  exit(0);
}

int factorial_with_recursion (int a) {
  int result;

  if (a < 0) {
    result = 0;
  } else if (a == 0 || a == 1) {
    result = 1;
  } else {
    int prev_result = factorial_with_recursion (a - 1);
    result = a * prev_result;
  }

  return result;
}

int factorial_with_loop (int a) {
  int result;

  if (a < 0) {
    result = 0;
  } else {
    result = 1;
    for (a; a > 1; a--) {
      /* Equivalent to: `result = result * a` */
      result *= a;
    }
  }

  return result;
}
