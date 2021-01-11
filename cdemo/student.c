#include <stdio.h>



// student structure
//struct Student...


void printStudent(struct Student* student)
{
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
}


int main()
{

  // an array of students
  //xxx students;

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
