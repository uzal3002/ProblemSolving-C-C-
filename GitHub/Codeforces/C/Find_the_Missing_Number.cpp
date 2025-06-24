#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        long long M;
        int A, B, C;
        scanf("%lld %d %d %d", &M, &A, &B, &C);

        long long sumResult = 1LL * A * B * C;

        if (sumResult == 0)
        {
            printf("0\n");
        }
        else if (M % sumResult != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", M / sumResult);
        }
    }

    return 0;
}
