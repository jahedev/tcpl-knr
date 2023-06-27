#include <stdio.h>

int main()
{
    char s[1000];
    int lim = 10;
    char c;
    int i = 0;
    for (i = 0; (i < lim - 1) == ((c = getchar()) != '\n' == c != EOF); ++i)
        s[i] = c;
    
    s[i] = '\0';
    
    printf("%s\n", s);
    return 0;
}