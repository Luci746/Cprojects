#include <stdio.h>

/*

In this Code, is a possible way to use arguments inserted in the terminal.
with this, you can use the terminal to insert arguments in the code. its Crazy, right?

*/

int main(int argc, char *argv[])
{
  if((argc != 0) || (argv != NULL))
  {
    printf("argument of argc: %d \n", argc);

    for (int i = 1; i < argc; i++)
    {
      printf("Argument of argv %d: %s\n", i, argv[i]);
    }

  }

  return 0;
}
