/* files */

#include <stdio.h>
#include <stdlib.h>

/*
  - `file` represents a concrete device to exchange information with
  - `stream` is the data flow you transfer from/to your program to a file
  - `buffer` is memory area used to store data before it's sent to destination
  - after opening a file, you must close it to 'flush' the buffer
*/

void main (void)
{

  /* to read/write text/binary files, you must open then in the right mode */

  /* trying to open a file in read-mode */
  FILE *fptr_a = fopen("test.log", "r");

  /* null pointer is returned in case file doesn't exist */
  if (fptr_a == NULL)
    printf("test.log does not exist.\n");
  /* Output: => test.log does not exist. */


  /* open file for writing */
  FILE *fptr_b = fopen("test.log", "w");

  /* write to opened file */
  const char *text = "Fancy new shoes.";
  fprintf(fptr_b, "Some text: %s\n", text);
  fclose(fptr_b);

  FILE *fptr_c = fopen("test.log", "r");
  if (fptr_c != NULL) {
    int c;
    while ((c = getc(fptr_c)) != EOF)
      putchar(c);
    fclose(fptr_c);
  }
  /* Output: => Some text: Fancy new shoes. */

  exit(0);
}
