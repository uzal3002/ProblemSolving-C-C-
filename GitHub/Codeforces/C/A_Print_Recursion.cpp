#include <stdio.h>

void love(int N, int n)
{   
    if (n == N)
    {
        return;
    }

    printf("I love Recursion\n");
    love(N, n + 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    love(N, 0);

    return 0;
}