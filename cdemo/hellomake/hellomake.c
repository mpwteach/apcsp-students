// hellomake.c
//
// example C program to demo multiple source files and Makefile
//

#include <stdio.h>

// include a header file
#include "hellofunc.h"

int main()
{
  printf("Hello World! %d\n", func());
}
