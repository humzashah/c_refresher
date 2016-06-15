/* enum */

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
  /*
    - enum data type can be used to represent integer constants
    - by default enum values start with 0
    - this can be changed by either changing the first value or by assigning
      all values
  */
  enum DAY
  {
    monday = 1,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
  } day_of_week;

  enum DAY today = wednesday;

  printf("today's day number is: %d\n", today);
  /* Output: => today's day number is: 3 */

  exit(0);
}
