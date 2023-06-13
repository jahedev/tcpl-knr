#include <stdio.h>

#define bool int
#define true 1
#define false 0

int main() {
  bool lastWasBlank = 0;

  char c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t') {
      if (!lastWasBlank) {
        putchar(c);
      }
      lastWasBlank = true;
      continue;
    } else {
      lastWasBlank = false;
    }

    putchar(c);
  }
}