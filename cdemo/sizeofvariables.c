#include<stdio.h>

int main()
{
  double a = 3.14159;
  float b = 25.0;
  int c = 545;
  long int d = 123;
  char e = 'B';
  
  printf("double a value %.4f and size %d bytes.\n", a, sizeof(a));
  printf("float b value %4.2f and size %d bytes.\n", b, sizeof(b));
  printf("int c value %d (oct %o, hex %x) and "		\
	 "size %d bytes.\n", c, c, c, sizeof(c));
  printf("long int d value %d and size %d bytes.\n", d, sizeof(d));
  printf("char e value %c and size %d bytes.\n", e, sizeof(e));
}

