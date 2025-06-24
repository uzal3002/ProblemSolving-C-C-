#include <stdio.h>

void even_number(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    even_number(a, n, i + 1);

    if (i % 2 == 0)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    even_number(A, N, 0);

    return 0;
}