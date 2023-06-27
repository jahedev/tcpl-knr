#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Unisgned\n-----------------\n");
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);

    printf("\nSigned\n-----------------\n");
    printf("unsigned int: %ud\n", UINT_MAX);
    printf("unsigned char: %d\n", UCHAR_MAX);
    printf("unsigned short: %d\n", USHRT_MAX);
    printf("unsigned long: %ul\n", ULONG_MAX);

    return 0;
}