#include <stdio.h>

//
// Simple program which requires two integer inputs on the command line 
//
int main(int argc, char* argv[])
{
  // first check to see if two args (3 including program name) were entered 
  if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    return 1;
  }

  // at this point we know we have two args, let's check that they are ints
  int arg1;
  // ssscanf scans a string for a format - in this case an integer (%d) and returns
  // the number of items found
  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }

  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }

  
  // OK - at this stage the user input is validated and we can proceed...
  
  printf("great you entered two ints: %d and %d sum=%d\n", arg1, arg2, arg1+arg2);
  printf("  and the square of arg1 is %d\n", arg1*arg1);
  printf("%d\n", arg2*arg2);
}

