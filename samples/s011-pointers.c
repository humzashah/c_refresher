/* pointers OR address variables */

/*
  - variables in C hold a left value and a right value
  - left value is for a variable's address and can be gotten with '&'
  - right value is for a variable's content
  - a pointer is a variable that has its own address as the left value and the
    the address of another variable as its right value
*/

#include <stdio.h>
#include <stdlib.h>

void main (void) {
  int x;
  printf("x: address=%p, content=%d\n", &x, x);
  /*
    Output:
    => x: address=0x7fff04f7a514, content=32766
    Note: Because value isn't assigned yet, content signifies what is left
          there from the last memory writing
  */

  int y = 7;
  printf("y: address=%p, content=%d\n", &y, y);
  /* Output: => y: address=0x7ffee7584764, content=7 */

  /* Declare pointers with `data_type *ptr_name = variable;` */
  /* In one-line: `int *y_ptr = &y;` */
  int *y_ptr;
  y_ptr = &y;
  printf("y_ptr: address=%p, content=%p\n", &y_ptr, y_ptr);
  /* Output: y_ptr: address=0x7fff12b110e0, content=0x7fff12b110dc */

  /* pointers can be dereferenced with '*' to obtain the value they point to */
  printf("y_ptr: dereferenced=%d\n", *y_ptr);
  /* Output: y_ptr: dereferenced=7 */

  /* pointers with 0 right values are 'null pointers' */
  int *np = 0;
  printf("np: address=%p, content=%p\n", &np, np);
  /* Output: np: address=0x7ffdc0ba0f30, content=(nil) */

  /*
    Note: You can modify a variable's value by modifying a pointer pointing
          which points to its address:
  */

  int a = 1;
  printf("a: address=%p, content=%d\n", &a, a);
  /* Output: a: address=0x7ffc447d247c, content=1 */

  int *a_ptr = &a;
  *a_ptr = 2;
  printf("a: address=%p, content=%d\n", &a, a);
  /* Output: a: address=0x7ffc447d247c, content=2 */
  /* Note: value changed from 1 to 2 */

  /*
    Note: pointers let you modify the same memory space from various locations.
          this saves you from copying possibly large objects between functions.
  */

  exit(0);
}
