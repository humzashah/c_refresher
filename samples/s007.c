/* boolean values, logical operators, if/else if/else conditions */

#include <stdio.h>
#include <stdlib.h>

/* functions declared below the main function need to be declared on top */
int evaluator(int a, int b);

/*
  - C doesn't have boolean data types
  - Zero values are considered FALSE
  - Non-zero values are considered TRUE
  - Integers are used to print boolean values too
*/

void main (void) {
  int true_var = 3 && 4;
  int false_var = !true_var;

  printf("True with logical AND (&&): %d\n", true_var);
  /*
    Output:
    => True with logical AND (&&): 1
  */

  printf("False with negation (!): %d\n", false_var);
  /*
    Output:
    => False with negation (!): 0
  */

  printf("True with logical OR (||): %d\n", true_var || false_var);
  /*
    Output:
    => True with logical OR (||): 1
  */


  evaluator(2, 0);
  /*
    Output:
    => 'If' block for if-2
  */

  evaluator(0, 3);
  /*
    Output:
    => 'Else If' block for if-0 AND else-if-3
  */

  evaluator(0, 0);
  /*
    Output:
    => 'Else' block for if-0 AND else-if-0
  */

  exit(0);
}

int evaluator(int a, int b) {
  /* Will simply print which block is evaluated for given values */

  if (a) {
    printf("'If' block for if-%d\n", a);
  } else if(b) {
    printf("'Else If' block for if-%d AND else-if-%d\n", a, b);
  } else {
    printf("'Else' block for if-%d AND else-if-%d\n", a, b);
  }

  return 0;
}
