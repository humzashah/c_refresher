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

  unsigned short bitwise_or = a | b;
  printf("Bitwise OR of %d and %d is %d\n", a, b, bitwise_or);

  unsigned short bitwise_xor = a ^ b;
  printf("Bitwise XOR of %d and %d is %d\n", a, b, bitwise_xor);

  unsigned short bitwise_complement = ~a;
  printf("Bitwise complement of %d is %d\n", a, bitwise_complement);

  unsigned short bit_shift_right = a >> 1;
  printf("Shifting 1 bit of %d to the right yields %d\n", a, bit_shift_right);

  unsigned short bit_shift_left = a << 1;
  printf("Shifting 1 bit of %d to the left yields %d\n", a, bit_shift_left);

  exit(0);
}
