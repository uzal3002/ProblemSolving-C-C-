#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int M;
    scanf("%d", &M);

    for (int i = 1; i <= M; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
        printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }
    
    return 0;
}
