/* scopes of variables */

#include <stdio.h>
#include <stdlib.h>

/* following variable has program scope and is declared in an external file */
extern int x;

/* following variable has file scope and cannot be used outside of this file */
static int y;

/*
  - following variable has program scope and is accessible everywhere in this
    file
*/
int a = 100;

void main (void) {
  /* following variable has local block scope and hides the outside variable */
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
