#include <stdio.h>
#include <string.h>

int main() {

    int N;
    scanf("%d", &N);
    int arr[N];
    
    int max = 0, result = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        result = max - arr[i];
        printf("%d ", result);
    }

    return 0;
}