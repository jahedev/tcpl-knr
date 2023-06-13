#include <stdio.h>

int main() {
  int c;
  int backspaceCount = 0;
  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\t':
      putchar('\\');
      putchar('t');
      break;
    case '\b':
      putchar('\b');
      ++backspaceCount;
      break;
    case '\\':
      putchar('\\');
      break;
    default:
      for (; backspaceCount > 0; --backspaceCount) {
        putchar('\\');
        putchar('b');
      }
      putchar(c);
    }
  }

  return 0;
}