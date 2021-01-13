//
// hellofunc.c
//
//

#include <stdio.h>

// always include my own header file
#include "hellofunc.h"

// declare myFoo so foo can use it
void myFoo(int* ip);

// the definition of foo, this function is declared in hellofunc.h
int foo()
{
  printf("got to function foo in hellofunc\n");

  int i = 123;
  myFoo(&i);  // call myFoo
  return i;
}

// this is hellofunc.s's private funtion so it is not in the header file
void myFoo(int* ip)
{
  *ip += 256;
}


