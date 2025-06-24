#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            scanf("%d", &arr[i][j]);
            printf("%d", arr[i][j]);
        }
        
    }
    

    return 0;
}