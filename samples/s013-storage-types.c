/* storage types */

#include <stdio.h>
#include <stdlib.h>

/*
  - `int a` is a shortcut for `auto int a` which means: reallocate memory space
    once variable scope is 'finished'
*/

void func_one (void) {
  auto int a = 1;
  printf("a: auto int value = %d\n", a++);
}


/*
  - `static int a` can be used to retain the memory space and value even after
    the variable's scope has ended
*/

void func_two (void) {
  static int a = 1;
  printf("a: static int value = %d\n", a++);
}

void main (void) {
  for (int i = 0; i <= 2; i++)
    func_one();
  /*
    Output:
    => a: auto int value = 1
    => a: auto int value = 1
    => a: auto int value = 1
  */

  for (int i = 0; i <= 2; i++)
    func_two();
  /*
    Output:
    => a: static int value = 1
    => a: static int value = 2
    => a: static int value = 3
  */

  /* `const a` can be used to set read-only variables */
  const int j = 0;
  /*
    j = 1;
    ^ Above will yield compilation error: assignment of read-only variable ‘j’
  */

  exit(0);
}
