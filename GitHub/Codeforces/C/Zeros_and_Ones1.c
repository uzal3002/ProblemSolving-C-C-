#include <stdio.h>
#include <string.h>

int main() {

    int N;
    scanf("%d", &N);
    int arr[N];
    
    int number1 = 0;
    int number2 = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
        {
            number1++;
        }
        else if (arr[i] == 1)
        {
            number2++;
        }
    }

    printf("%d %d ", number1, number2);

    return 0;
}