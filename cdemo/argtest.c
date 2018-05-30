#include <stdio.h>

int main(int argc, char* argv[])
{
  // simple demo to print out all args supplied to program on the command line
  int arg = 0;
  while (arg < argc)
  {
    printf("Arg %d is %s\n", arg, argv[arg]);
    arg++;
  }
}

