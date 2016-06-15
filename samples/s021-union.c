/* union */

#include <stdio.h>
#include <stdlib.h>

/*
  - unions can be used to save space by bunling variables of different types
  - this helps save memory in resource-scarce systems
  - a union's size is of the largest object it has
  - according to the ANSI C standard, one is supposed to read only the most
    recently written union member; however reading other members is possible
    in many compilers
*/

union data
{
   int i;
   float f;
};

void main (void)
{
  union data data_one;

  printf("data_one size is %lu\n", sizeof(data_one));
  /* Output: => data_one size is 4 */

  data_one.i = 1;
  printf("data_one.i: value is %d\n", data_one.i);
  /* Output: => data_one.i: value is 1 */

  data_one.f = 2.0;
  printf("data_one.f: value is %f\n", data_one.f);
  /* Output: => data_one.f: value is 2.000000 */

  printf("data_one.i: value is %d\n", data_one.i);
  /* Output: => data_one.i: value is 1073741824 */

  exit(0);
}
