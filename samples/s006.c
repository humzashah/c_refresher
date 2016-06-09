/* Bitwise operations */

#include <stdio.h>
#include <stdlib.h>

/* 'unsigned short' are integers ranging from 0 to 65535 */
/* Read more about data types: */
/* http://www.tutorialspoint.com/cprogramming/c_data_types.htm */
void main (void) {
  /* 0000 0000 0000 0011 */
  unsigned short a = 3;

  /* 0000 0000 0000 0110 */
  unsigned short b = 6;

  unsigned short bitwise_and = a & b;
  printf("Bitwise AND of %d and %d is %d\n", a, b, bitwise_and);
  /*
    Output:
    => Bitwise AND of 3 and 6 is 2
  */

  unsigned short bitwise_or = a | b;
  printf("Bitwise OR of %d and %d is %d\n", a, b, bitwise_or);
  /*
    Output:
    => Bitwise OR of 3 and 6 is 7
  */

  unsigned short bitwise_xor = a ^ b;
  printf("Bitwise XOR of %d and %d is %d\n", a, b, bitwise_xor);
  /*
    Output:
    => Bitwise XOR of 3 and 6 is 5
  */

  unsigned short bitwise_complement = ~a;
  printf("Bitwise complement of %d is %d\n", a, bitwise_complement);
  /*
    Output:
    => Bitwise complement of 3 is 65532
  */

  unsigned short bit_shift_right = a >> 1;
  printf("Shifting 1 bit of %d to the right yields %d\n", a, bit_shift_right);
  /*
    Output:
    => Shifting a bit of 3 to the right yields 1
  */

  unsigned short bit_shift_left = a << 1;
  printf("Shifting 1 bit of %d to the left yields %d\n", a, bit_shift_left);
  /*
    Output:
    => Shifting a bit of 3 to the left yields 6
  */

  exit(0);
}
