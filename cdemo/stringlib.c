#include <stdio.h>
#include <string.h>



int main()
{

  char str1[10] = "first";
  char str2[10] = "second";
  char str3[20];
  
  printf("length of str1 = %lu\n", strlen(str1));
	
  strcpy(str3, str1);
  strcat(str3, str2);

  printf("%s + %s = %s\n", str1, str2, str3);

  if (strcmp(str1, str2) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");
}

