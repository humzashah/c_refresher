/* Basic string printing */

/* include header to make 'printf' function available */
#include <stdio.h>

/* include header to make 'exit' function available */
#include <stdlib.h>

/*
  - all C programs are executed by running the main function
  - void here indicates function doesn't return value
  - empty paranthesis mean function can take any arguments
*/
void main () {
  printf ("Howdy, neighbor! This is my first C program.\n");
  /*
    Output:
    => Howdy, neighbor! This is my first C program.
  */

  /* exit the process with 0 code */
  exit(0);

  /*
    Note: for the main function only, `exit(0)` and `return 0` *effectively*
          yield the same result; but for the latter, the function declaration
          should be `int main` instead of `void main`
  */
}
