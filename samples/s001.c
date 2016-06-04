#include <stdio.h> /* for printf */
#include <stdlib.h> /* for exit(0) */

/*
  - all C programs are executed by running the main function
  - void indicates function doesn't return value
  - empty paranthesis mean function can take any arguments
*/
void main() {
  printf ("Howdy, neighbor! This is my first C program.\n");

  /*
    - exit the process with 0 code
    - 0 indicates success
    - exit codes greater than 0 mean failure
    - the greater the exit code, the more severe the failure
  */
  exit(0);
}
