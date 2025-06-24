#include <stdio.h>

void digits(int N, int n)
{
    if (n == N)
    {
        return;
    }
     

    printf("%d\n", n);
    digits(N, n + 1);
}

int main()
{
    int N, n;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &n);
    } 

    digits(N, 0);

    return 0;
}