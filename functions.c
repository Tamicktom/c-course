#include <stdio.h>

void sayHi(char name[], int age);

int main() {

  sayHi("John", 25);

  return 0;
}

void sayHi(char name[], int age) {
  printf("Hellow %s, you are %d old", name, age);

  return;
}