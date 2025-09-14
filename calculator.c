#include <stdio.h>
#include <stdlib.h>

int main(){
  double num1, num2, result;
  
  printf("Enter first number: ");
  scanf("%lf", &num1);

  printf("Enter the second number: ");
  scanf("%lf", &num2);

  result = num1 + num2;

  printf("Result: %.2f", result);

  return 0;
}