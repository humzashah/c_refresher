/* structs */

#include <stdio.h>
#include <stdlib.h>

/* include header for `strcpy` function */
#include <string.h>

/*
  - structs let you easily define complex structures for objects that can be
    instantiated later
*/

struct Book
{
  int year;
  char author[50];
  char title[50];
} book;

void main (void)
{
  struct Book book_one;

  book_one.year = 1960;
  strcpy(book_one.author, "Harper Lee");
  strcpy(book_one.title, "To Kill a Mockingbird");

  printf("book_one was released in %d\n", book_one.year);
  printf("it was written by %s\n", book_one.author);
  printf("it is titled %s\n", book_one.title);

  /*
    Output:
    => book_one was released in 1960
    => it was written by Harper Lee
    => it is titled To Kill a Mockingbird
  */

  exit(0);
}
