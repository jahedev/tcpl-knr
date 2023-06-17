#include <stdio.h>

int main()
{
  printf("Type a character:\n");

  int isEOF = 0;
  int lastWasEOF = 0;
  while (isEOF = getchar())
  {
    if (isEOF && lastWasEOF)
      exit(0);
    else if (isEOF)
    {
      lastWasEOF = 1;
      printf("Type EOF again to break.\n");
    }



    printf("getchar() != EOF: %d\n", !isEOF);
    lastWasEOF = isEOF;
  }
}