/* functions with variable arguments */

#include <stdio.h>
#include <stdlib.h>

/* include header to use va_list, va_start, va_arg, and va_end macros */
#include<stdarg.h>

/* x denotes number of arguments passed; elipses denote multiple arguments */
int add_integers (int x, ...) {
  int sum = 0;

  /*
    - va_list defines an array type suitable for va_* functions
    - it sets a pointer at the beginning of this array
  */
  va_list arglist;

  /* va_start initializes arglist for va_arg and va_end */
  va_start (arglist, x);

  /* we loop over our arguments, knowing how many there are */
  for (int i = 0; i < x; i++) {
    /*
      - va_arg retrieves the next argument in arglist of specified type
        by moving the pointer a position ahead in the array
    */
    sum += va_arg(arglist, int);
  }

  /* va_end resets arglist and sets the pointer to NULL */
  va_end (arglist);

  return sum;
}

void main (void) {
  int sum_a = add_integers(2, 1, 2);
  printf("Sum of 1 and 2 is %d\n", sum_a);
  /* Output: => Sum of 1 and 2 is 3 */

  int sum_b = add_integers(3, 3, 4, 5);
  printf("Sum of 3, 4, and 5 is %d\n", sum_b);
  /* Output: => Sum of 3, 4, and 5 is 12 */

  exit(0);
}
