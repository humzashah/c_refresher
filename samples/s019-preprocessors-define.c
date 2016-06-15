/* preprocessors - define */

#include <stdio.h>
#include <stdlib.h>

/*
  - you can pre-process C code before it reaches compiler
  - this enables you to select what code gets sent to the compiler
  - you can also create macros with preprocessor directives
  - `define` is one such directive
*/

/* defining an object macro */
#define placeholders { 13, 12, 43 }

/*
  - defining a function macro
  - take care to wrap each argument in paranthesis for accurate evaluation
*/
#define get_max(a, b) ((a) > (b) ? (a) : (b))
#define get_min(a, b) ((b) > (a) ? (a) : (b))

void main (void)
{
  int array[3] = placeholders;
  for (int i = 0; i <= 2; i ++)
    printf("array element on %d is %d\n", i, array[i]);
  /*
    Output:
    => array element on 0 is 13
    => array element on 1 is 12
    => array element on 2 is 43
  */

  int max = get_max(21 * 32, 31 * 23);
  int min = get_min(21 * 32, 31 * 23);
  printf("%d is larger or equal to %d\n", max, min);
  /* Output: => 713 is larger or equal to 672 */

  /*
    - if required, constants / macros set with `define` can be easily
      undefined using `undef`
  */

  exit(0);
}
