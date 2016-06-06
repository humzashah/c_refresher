/* 'char' and floating point numbers */

#include <stdio.h>
#include <stdlib.h>

void main (void) {
  char a = 'A';
  /* %c denotes character */
  printf("Printing a character: %c\n", a);

  /* You can assign ASCII codes to char variables */
  char b = 97;
  printf("Printing a character through its ASCII code: %c\n", b);

  /*
    - floating point numbers can be represented by 'float'
    - suffix number with 'f' or 'F' to specify float,
      otherwise you'll be creating a double
  */
  float c = 1.12F;
  /* %f denotes floating point number */
  printf("Printing a float: %f\n", c);

  /*
    - floating point numbers can also be represented by 'double',
      for increased precision
    - scientific notation can be used to declare large (or small) numbers
  */
  double d = -3.45E12;
  printf("Printing a float: %f\n", d);

  exit(0);
}
