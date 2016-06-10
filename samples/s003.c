/* 'char' date type and floating point numbers */

#include <stdio.h>
#include <stdlib.h>

void main (void) {
  char a = 'A';
  /* %c denotes character */
  printf("Printing a character: %c\n", a);
  /*
    Output:
    => Printing a character: A
  */

  /* You can assign ASCII codes to char variables */
  char b = 97;
  printf("Printing a character through its ASCII code: %c\n", b);
  /*
    Output:
    => Printing a character through its ASCII code: a
  */

  /*
    - floating point numbers can be represented by 'float'
    - suffix number with 'f' or 'F' to specify float,
      otherwise you'll be creating a double
  */
  float c = 1.12F;
  /* %f denotes floating point number */
  printf("Printing a float: %f\n", c);
  /*
    Output:
    => Printing a float: 1.120000
  */

  /*
    - floating point numbers can also be represented by 'double',
      for increased precision
    - scientific notation can be used to declare large (or small) numbers
  */
  double d = -3.45E12;
  printf("Printing a float: %f\n", d);
  /*
    Output:
    => Printing a float: -3450000000000.000000
  */

  exit(0);
}
