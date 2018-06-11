#include <stdio.h>


//
// simple file output
//
int main(int arc, char* argv[])
{
  int arr[] = { 5, 8, 3, 7, 0 };

  FILE* outFile;

  // open a file
  outFile = fopen("testfile.out", "w");
  if (outFile == NULL) {
    printf("error - failed to open file for writing\n");
    return 1;
  }

  fprintf(outFile, "This is a test file\n");

  int i = 0;
  while (arr[i] != 0) {
    fprintf(outFile, "Val %d = %d\n", i, arr[i]);
    i++;
  }
  
  fclose(outFile);
}
