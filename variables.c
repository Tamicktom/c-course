#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[] = "John";
  int age = 35;

  printf("There once was a man named %s\n", name);
  printf("He was %d years old\n", age);

  age = 40; // Change age to 40
  name[0] = 'M'; // Change name to "Mohn"

  printf("He really liked the name %s\n", name);
  printf("But didn't like being %d\n", age);

  return 0;
}