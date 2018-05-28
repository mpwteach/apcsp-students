#include <stdio.h>
#include <string.h>

struct Book {
  char title[50];
  char author[50];
  char subject[100];
  int bookid;
};


void printBookByVal(struct Book book)
{
  // a new copy of book
  printf("my book is -\n");
  printf("  title:%s\n", book.title);
  printf("  author:%s\n", book.author);
  printf("  subject:%s\n", book.subject);
  printf("  id:%d\n", book.bookid);
}

void printBookByPtr(struct Book* book)
{
  printf("my book is -\n");
  printf("  title:%s\n", book->title);
  printf("  author:%s\n", book->author);
  printf("  subject:%s\n", book->subject);
  printf("  id:%d\n", book->bookid);

  // could do it this way, but -> is easier
  printf("  id:%d\n", (*book).bookid);
}

int main()
{
  // create two books
  struct Book mybook1;
  struct Book mybook2;

  // fill one book with info - note strcpy
  strcpy(mybook1.title, "C Programming");
  strcpy(mybook1.author, "Nuha Ali");
  strcpy(mybook1.subject, "C Programming");
  mybook1.bookid = 62782;

  // pass by value
  printBookByVal(mybook1);

  // pass by ref - generally preferred as we don't make a copy
  printBookByPtr(&mybook1);
}
