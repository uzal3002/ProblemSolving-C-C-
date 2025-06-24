#include <stdio.h>
#include <string.h>

int main() {

    int N, X_th;
    scanf("%d", &N);
    int arr[N];
    int update = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
        //printf("%d", arr[X_th]);
    }

    for (int i = 0; i < X_th; i++)
        {
            scanf("%d", &arr[X_th]);
            printf("%d", arr[X_th]);
        }

    //printf("%d ", result);

    return 0;
}