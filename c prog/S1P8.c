#include <stdio.h>

int strLength(char *s)
{
    int c = 0;
    while (*s != '\0')
    {
        c++;
        s++;
    }
    return c;
}

int main()
{
    char str[] = "HELLO";
    int len = strLength(str);
    printf(" The length of the string is %d", len);
}