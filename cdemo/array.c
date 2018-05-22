#include <stdio.h>




int main()
{
  // create an int array 5 long
  int arr[5];
  
  for (int i = 0; i < 5; i++)
  {
    arr[i] = i * i;
  }

  printf("1st and 3rd vals: %d, %d\n", arr[0], arr[2]);
  
  printf("Or %d, %d\n", *arr, *(arr+2));

  
  // create array to hold intialized values
  int arr2[] = { 1, 2, 3, 4 };
  for (int i = 0; i < 4; i++)
  {
    printf("%d, ", arr2[i]);
  }
  printf("\n");
  
}
