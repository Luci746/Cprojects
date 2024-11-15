#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("argument of argc: %d \n", argc);

  for (int i = 0; i < argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
  }
  printf("i'm don't know wtf is this !");


  return 0;
}
