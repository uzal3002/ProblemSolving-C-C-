#include <stdio.h>

char capital_to_small(char val)
{
    if (val >= 'A' || val <= 'Z')
    {
        printf("%c", val + 32);
    }
}

int main() {
    char x;
    scanf("%c", &x);
    capital_to_small(x);
    return 0;
}