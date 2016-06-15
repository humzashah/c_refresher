/* Casting data types */

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
  int a = 1;

  /* one data type can be cast as another using (new type)variable */
  printf("Print integer as float: %f\n", (float)a);
  /*
    Output:
    => Print integer as float: 1.000000
  */

  exit(0);
}
