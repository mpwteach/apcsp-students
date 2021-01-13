//
// student.c
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"
#include "encrypt.h"


const char* STUFILE = "studentdata.txt";

// holds the student pointer array
int numStudents = 0;
Student* students[100] = {0};


void createStudent(char* fname, char* lname, int age, int id)
{

}


void deleteStudent(Student* student)
{

}


void deleteStudents()
{

}


void saveStudents(int key)
{

}


void loadStudents(int key)
{

}


void printStudent(Student* student)
{
  printf("  Student: %s %s\n", student->firstName, student->lastName);
  printf("    age: %d\n", student->age);
  printf("    id: %ld\n", student->id); 
}


void printStudents()
{
  for (int i = 0; i < numStudents; i++) {
    printf("\n----- student %d ------\n", i);
    printStudent(students[i]);
  }
}


Student* getStudent(int num)
{
  return students[num];
}


