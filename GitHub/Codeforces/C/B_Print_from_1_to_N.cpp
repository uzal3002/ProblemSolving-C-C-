#include <stdio.h>

void love(int N, int n)
{   
    if (n > N)
    {
        return;
    }
    
    printf("%d\n", n);
    love(N, n + 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    love(N, 1);

    return 0;
}