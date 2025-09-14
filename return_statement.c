#include <stdio.h>

double cube(double value);

int main(){

  printf("Answer: %f", cube(3.123));

  return 0;
}

double cube(double value){
  return value * value * value;
}