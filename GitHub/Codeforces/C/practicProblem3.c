#include <stdio.h>

char char_to_ascii(char val)
{
    if (val >= 'a' || val <= 'z' || val >= 'A' || val <= 'Z' )
    {
        printf("%d", val);
    }
}

int main()
{
    char x;
    scanf("%c", &x);
    char_to_ascii(x);
    return 0;
}