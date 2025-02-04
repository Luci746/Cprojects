#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main(int argc, char **agrv)
{
  int num1;
  int num2;

  printf("Digite num1: ");
  scanf("%i", &num1);
  printf("\nDigite num2: ");
  scanf("%i", &num2);

  int res;

  res = sum(num1, num2);

  printf("\nResult: %i", res);

  printf("\n");
  
  // test
    printf("\033[1;31;47mRed Text on White Background\033[0m\n");
    printf("\033[4;34mUnderlined Blue Text\033[0m\n");
    printf("\033[7;32mInverted Green Text\033[0m\n");
    printf("\033[9;33mStrikethrough Yellow Text\033[0m\n");

  return 0;
}
