#include "stdio.h"
#include "stdlib.h"

int main()
{
  int age;
  char name[50];
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age < 0)
  {
    printf("Invalid age entered.\n");
    return 1;
  }

  printf("Hello, %s", name);
  printf("You are %d years old.\n", age);
  return 0;
}