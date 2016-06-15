/* Completing 'Fizz Buzz' for 1-30 : http://c2.com/cgi/wiki?FizzBuzzTest */

#include <stdio.h>
#include <stdlib.h>

int fizz_buzz (void)
{
  for (int number = 1; number <= 30; number++)
  {
    /* divisible by 3 */
    int d3 = number % 3 == 0;

    /* divisible by 5 */
    int d5 = number % 5 == 0;

    if (d3)
      printf("Fizz");

    if (d5)
      printf("Buzz");

    if (!d3 && !d5)
      printf("%d", number);

    printf("\n");
  }

  return 0;
}

void main (void)
{
  fizz_buzz();

  /*
    Output:

    1
    2
    Fizz
    4
    Buzz
    Fizz
    7
    8
    Fizz
    Buzz
    11
    Fizz
    13
    14
    FizzBuzz
    16
    17
    Fizz
    19
    Buzz
    Fizz
    22
    23
    Fizz
    Buzz
    26
    Fizz
    28
    29
    FizzBuzz
  */

  exit(0);
}
