#include <stdio.h>


void simpleFunc()
{
  printf("simpleFunc\n");
}


// takes two ints - pass by value
int funcWArgs(int a, int b)
{
  printf("funcWArgs: a=%d, b=%d\n", a, b);

  a = 101;
  b = 202;

  return 123;
}

// takes a pointer to an int - pass by ref
int funcWPArgs(int a, int* b)
{
  printf("funcWArgs: a=%d, b=%d\n", a, *b);

  a = 101;
  *b = 202;

  return 123;
}


int main()
{
  printf("main\n");

  simpleFunc();

  int a = 10;
  int b = 20;

  int r;

  r = funcWArgs(a, b);

  printf("main:  a=%d, b=%d\n", a, b);

  r = funcWPArgs(a, &b);

  printf("main:  a=%d, b=%d\n", a, b);
}
