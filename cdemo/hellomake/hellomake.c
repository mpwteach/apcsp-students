//
// hellomake.c
//
// example C program to demo multiple source files and Makefile
//

#include <stdio.h>

// include a header file
#include "hellofunc.h"

int main()
{
  // call function foo in hellofunc
  int res = foo();
  
  printf("Hello World! %d\n", res);
}
