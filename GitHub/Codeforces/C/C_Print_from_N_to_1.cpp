#include <stdio.h>

void love(int N, int n)
{   
    if (n > N)
    {
        return;
    }

    love(N, n + 1);

    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    love(N, 1);

    return 0;
}