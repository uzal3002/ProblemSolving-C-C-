#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char arr[10001];
 
    for (int i = 0; i < n; i++)
    {
        int smallCount = 0, capitalCount = 0, digitsCount = 0;
        scanf("%s", arr);

        for (int j = 0; arr[j] != '\0'; j++)
        {
            if (arr[j] >= 'A' && arr[j] <= 'Z')
            {
                capitalCount++;
            }

            else if (arr[j] >= 'a' && arr[j] <= 'z')
            {
                smallCount++;
            }

            else if (arr[j] >= '0' && arr[j] <= '9')
            {
                digitsCount++;
            }
        }
        printf("%d %d %d\n", capitalCount, smallCount, digitsCount);
    }

    return 0;
}