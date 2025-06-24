#include <stdio.h>
#include <string.h>

int main() {
    char S[100001];
    scanf("%s", S);
    int consonants = 0;
    int length = strlen(S);

    for (int i = 0; S[i] != '\0'; i++)
    {
        int vuwel = S[i];
        if (S[i] == 'a' || S[i] == 'A' || S[i] == 'e' || S[i] == 'E'
            || S[i] == 'i' || S[i] == 'I' || S[i] == 'o' || S[i] == 'O'
            || S[i] == 'u' || S[i] == 'U')
            {
                consonants++;
            }
    }

    printf("%d",  length - consonants);

    return 0;
}