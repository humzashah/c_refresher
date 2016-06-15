/* dynamic memory allocation */

#include <stdio.h>

/* include header to make memory allocation functions available */
#include <stdlib.h>

/* include header to make `StrCopy` function available */
#include <string.h>

void main (void) {

  /*
    - `malloc` is used to allocate memory space on run time
    - it can be told the storage (bytes) size to allocate
    - it returns a void pointer
    - this pointer can be assigned to a variable of any data type
    - this assignment changes the data type of the pointer
    - if malloc fails, it return null pointer
    - such memory allocation is particularly useful when you don't know the
      size of object to initialize; for instance, creating an array of size
      that depends on user input
  */

  int x = 2;
  int y = sizeof(float);
  int storage = x * y;
  /* or non-ANSI compliance: `float *ptr_float = (float *) malloc(storage_float)` */
  float *ptr_float_a = malloc(storage);
  if (ptr_float_a != NULL)
    printf("malloc ptr value: %f\n", *ptr_float_a);
  /* Output: => malloc ptr value: 0.000000 */

  /*
    - `calloc` is used to hold X elements of Y bytes each
    - additionally, it initializes contents of allocated memory to zeroes
    - in contrast, malloc doesn't change the values in memory when allocating
      it; that unpredictability can be risky
  */

  float *ptr_float_b = calloc(x, y);
  if (ptr_float_b != NULL)
    printf("calloc ptr value: %f\n", *ptr_float_b);
  /* Output: => calloc ptr value: 0.000000 */

  /*
    - `relloc` modifies the size of an already allocated memory block
    - it can be provided a variable pointing to an allocated memory block and
      the new desired size
  */

  int new_storage = 2 * storage;
  ptr_float_a = realloc(ptr_float_a, new_storage);
  if (ptr_float_a != NULL)
    printf("realloc ptr value: %f\n", *ptr_float_a);
  /* Output: => realloc ptr value: 0.000000 */

  /*
    - memory dynamically allocated by malloc, calloc, or realloc should be
      freed up once it's no longer needed. this is accomplished by `free`
  */

  free(ptr_float_a);
  if (ptr_float_a == NULL)
    printf("ptr_float_a IS NULL\n");

  free(ptr_float_b);
  if (ptr_float_b == NULL)
    printf("ptr_float_b IS NULL\n");

  /* Note: `realloc(ptr_var, 0)` is the equivalent of `free(ptr_var)` */

  exit(0);
}
