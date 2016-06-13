/* scopes of variables */

#include <stdio.h>
#include <stdlib.h>

/* following variable is declared in an external file */
extern int x;

/* following variable is accessible everywhere in this file */
int a = 100;

void main (void) {
  /* following variable has local block scope and hides outside variable */
  for (int a = 1; a <= 2; a++)
    printf("a: local value = %d\n", a);
  /*
    Output:
    => a: local value = 1
    => a: local value = 2
  */

  printf("a: global value = %d\n", a);
  /* Output: => a: global value = 100 */

  exit(0);
}
