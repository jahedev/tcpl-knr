#include <stdio.h>

int main()
{
  int blanks, tabs, newlines, other;
  blanks = tabs = newlines = other = 0;

  char c;
  while ((c = getchar()) != EOF)
  {
    switch (c)
    {
    case ' ':
      ++blanks;
      break;
    case '\t':
      ++tabs;
      break;
    case '\n':
      ++newlines;
      break;
    default:
      ++other;
    }
  }

  printf("blanks: %d, tabs: %d, newlines: %d, other: %d\n",
         blanks, tabs, newlines, other);

  return 0;
}