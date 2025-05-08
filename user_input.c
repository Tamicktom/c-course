#include "stdio.h"
#include "stdlib.h"

int main()
{
  int age;
  char name[50];
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  // Remove newline character from name if present
  size_t len = strlen(name);
  if (len > 0 && name[len - 1] == '\n')
  {
    name[len - 1] = '\0';
  }
  // Check if name is empty
  if (strlen(name) == 0)
  {
    printf("Invalid name entered.\n");
    return 1;
  }

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