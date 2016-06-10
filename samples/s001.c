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

  /*
    - exit the process with 0 code
    - 0 indicates success
    - exit codes greater than 0 mean failure
    - the greater the exit code, the more severe the failure
  */
  exit(0);
}
