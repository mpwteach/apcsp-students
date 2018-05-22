#include <stdio.h>

int main(int argc, char* argv[])
{
  int arg = 0;
  while (arg < argc)
  {
    printf("Arg %d is %s\n", arg, argv[arg]);
    arg++;
  }
}

