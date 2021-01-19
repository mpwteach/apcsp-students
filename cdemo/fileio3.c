#include <stdio.h>

// simple demo of reading and writing some data to a file
//

char* FILE_NAME = "filename.txt";


// write contents of array to the file
void writeArr(float arr[], int size)
{
  FILE* fp;
  char buff[256];
  
  fp = fopen(FILE_NAME, "w");
  if (fp)
  {
    for (int i = 0; i < size; i++) {
      // copy the data into a string first, might be useful if you
      // want to do something to the string before saving it to the file...
      sprintf(buff, "arr %d : %f", i, arr[i]);
      fprintf(fp, "%s\n", buff);
    }
    fclose(fp);
  }
}


// read the contents of the file into the array
void readArr(float arr[], int* size)
{
  FILE* fp;

  fp = fopen(FILE_NAME, "r");
  if (fp)
  {
    *size = 0;
    while (1)
    {
      int i; float f;
      if (fscanf(fp, "arr %d : %f\n", &i, &f) == 2)
      {
        arr[*size] = f;
        (*size)++;
      }
      else
        break;
    }
    fclose(fp);
  }
  else
  {
    printf("no file found\n");
  }
}


int main()
{
  char input[256];

  // ask user whether to read or write file
  char c;
  while (1)
  {
    printf("Read or write (r/w): ");
    fgets(input, 256, stdin);
    int match = sscanf(input, "%c", &c);
    if (match == 1 && (c == 'r' || c == 'w'))
      break;
    else
      printf("enter r or w!\n");
  }

  // write to the file
  if (c == 'w') 
  {
    float arr[] = { 2.3, 4.5, 6.7 };
    writeArr(arr, 3);
    printf("wrote file\n");
  }
  // read from file
  if (c == 'r') 
  {
    int size = 0;
    float arr[5];
    readArr(arr, &size);

    printf("read file\n");
    for (int i = 0; i < size; i++)
      printf("arr %d : %f\n", i, arr[i]);
  }
}
