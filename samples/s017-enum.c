/* enum */

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
  enum DAY
  {
    monday = 0,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
  } day_of_week;

  enum DAY today = wednesday;

  printf("today's day number is: %d\n", today);
  /* Output: => today's day number is: 2 */

  exit(0);
}
