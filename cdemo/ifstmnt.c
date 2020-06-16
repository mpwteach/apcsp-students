#include <stdio.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], int* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%d", a);
    sscanf(argv[2], "%d", b);
  }
}


int main(int argc, char* argv[]) 
{
  // the two variables to compare - change these values to test your code
  int a = 5;
  int b = 6;
  
  // for testing only - do not change
  getTestInput(argc, argv, &a, &b);
  
  // equal operator - this one is done
  if (a == b)
    printf("true: %d == %d\n", a, b);
  else
    printf("false: %d == %d\n", a, b);
    
  // complete the rest below by adding if statements  
    
  // not equal operator
  printf("true: %d != %d\n", a, b);
  printf("false: %d != %d\n", a, b);
  
  // greater than
  printf("true: %d > %d\n", a, b);
  printf("false: %d > %d\n", a, b);
    
  // greater than or equal
  printf("true: %d >= %d\n", a, b);
  printf("false: %d >= %d\n", a, b);
  
  // and
  printf("true: %d == 0 && %d == 0\n", a, b);
  printf("false: %d == 0 && %d == 0\n", a, b);
  
  // or
  printf("true: %d == 0 || %d == 0\n", a, b);
  printf("false: %d == 0 || %d == 0\n", a, b);
    
  // not equal to 0
  printf("true: !(%d == 0)\n", a);
  printf("false: !(%d == 0)\n", a);
}
