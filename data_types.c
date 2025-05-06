#include "stdlib.h"
#include "stdio.h"

int main()
{
  int age = 40;
  double gpa = 40.0;
  char grade = 'A';
  char name[20] = "John Doe";

  printf("Age: %d\n", age);
  printf("GPA: %.2f\n", gpa);
  printf("Grade: %c\n", grade);
  printf("Name: %s\n", name);

  return 0;
}