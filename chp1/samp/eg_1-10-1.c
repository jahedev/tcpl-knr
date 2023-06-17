#include <stdio.h>
#define MAXLINE 1000

int getLine(void);
void Copy(void);

/* maximum input line size */
/* maximum length seen so far */
/* current input line */
/* print longest input line; specialized version */
main()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while ((len = getLine()) > 0)
        if (len > max)
        {
            max = len;
            Copy();
        }
    if (max > 0) /*therewasaline*/
        printf("%s", longest);
    return 0;
}

/* getLine:  specialized version */
int getLine(void)
{
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
/* Copy: specialized version */
void Copy(void)
{
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}