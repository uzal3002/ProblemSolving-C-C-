#include <stdio.h>

void summation(int X, int Y)
{
    scanf("%d %d", &X, &Y);
    int result = X + Y;
    
    printf("%d", result);
}

int main() {
    int x, y;
    summation(x, y);
    return 0;
}