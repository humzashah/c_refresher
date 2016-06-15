/* typedef */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  - typedef can be used to create custom data types
  - this can help simplify complex data types
  - typedef lines are processed by the compiler
*/

typedef char string_ten[10];

void main ()
{

  string_ten word = "simple";
  printf("word is %s\n", word);
  /* Output: => word is simple */

  exit(0);
}
