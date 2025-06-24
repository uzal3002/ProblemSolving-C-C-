#include <stdio.h>
#include <string.h>

int main()
{
    char S[10001];
    scanf("%s", &S);

    int length = strlen(S);
    int lv = 0, rv = length - 1, palindrome = 1;

    for (int i = 0; i < length; i++)
    {

        if (S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] = S[i] + 32;
        }
    }

    while (lv < rv)
    {
        if (S[lv] != S[rv])
        {
            palindrome = 0;
            break;
        }

        lv++;
        rv--;
    }

    if (palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
