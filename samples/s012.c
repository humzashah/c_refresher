/* arrays */

#include <stdio.h>
#include <stdlib.h>

void main (void) {
  int array_int[3] = {4, 12, 23};
  for (int i = 0; i < 3; i++)
    printf("array_int has %d on %d index\n", array_int[i], i);
  /*
    Output:
    => array_int has 4 on 0 index
    => array_int has 12 on 1 index
    => array_int has 23 on 2 index
  */

  /*
    Note: You can have a variable point to an array's start-address which is
          the address of its first element.
  */

  int *array_int_ptr = array_int;
  printf("Value of array_int_ptr: %p\n", array_int_ptr);
  /* Output: Value of array_int_ptr: 0x7ffeb7fc52d0 */

  printf("Address of first element of array_int: %p\n", &array_int[0]);
  /* Output: Address of first element of array_int: 0x7fffe5441ef0 */
  /* Note: address is same as in previous output. */

  int array_int_unsized[] = {4, 2, 1};
  for (int i = 0; i < 3; i++)
    printf("array_int_unsized has %d on %d index\n", array_int_unsized[i], i);
  /*
    Output:
    => array_int_unsized has 4 on 0 index
    => array_int_unsized has 2 on 1 index
    => array_int_unsized has 1 on 2 index
  */

  int array_int_2d[2][3] = { {1, 2, 3}, {4, 5, 6 } };
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", array_int_2d[i][j]);
    }
    printf("\n");
  }
  /*
    Output:
    => 1 2 3
    => 4 5 6
  */

  char array_char[3] = {'n', 'o', 'w'};
  for (int i = 0; i < 3; i++)
    printf("array_int has '%c' on %d index\n", array_char[i], i);
  /*
    Output:
    => array_int has 'n' on 0 index
    => array_int has 'o' on 1 index
    => array_int has 'w' on 2 index
  */

  /* A string is a character array with null as the last element */
  /* or `char word_a[] = "now"` */
  char word_a[4] = {'n', 'o', 'w', '\0'};
  printf("Printing a word: '%s'\n", word_a);
  /* Output: Printing word_a: 'now' */

  exit(0);
}
