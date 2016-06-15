/* preprocessors - others */

#include <stdio.h>
#include <stdlib.h>

/*
  - following preprocessor directives are most commongly used:
    define, undef, if, elif, else, ifdef, ifndef, endif
  - fortunately they have very self-explanatory names
*/

#define step_one 0
#define step_two 0

void main (void)
{
  #if 0
    printf("This code won't make it to the compiler", error_arg);
  #endif
  /* no output */

  /* `ifdef` and similar check for definied-state only, not value */
  #ifdef step_one
    printf("step_one is defined.\n");
  #elif step_two
    printf("step_one is undefined.\n");
    printf("step_two is defined.\n");
  #else
    printf("step_one is undefined.\n");
    printf("step_two is undefined.\n");
  #endif
  /* Output: => step_one is defined. */

  exit(0);
}

