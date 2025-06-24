#include <stdio.h>

char small_to_capital(char val)
{
    if (val >= 'a' || val <= 'z')
    {
        printf("%c", val - 32);
    }
}

int main() {
    char x;
    scanf("%c", &x);
    small_to_capital(x);
    return 0;
}