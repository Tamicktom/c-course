#include "stdio.h"
#include "stdlib.h"

int main()
{
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age < 0)
  {
    printf("Invalid age entered.\n");
    return 1;
  }

  printf("You are %d years old.\n", age);
  return 0;
}