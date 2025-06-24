#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = n - 1;
    int isSame = 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            isSame = 0;
            break;
        }
        i++;
        j--;
    }

    if (isSame)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}