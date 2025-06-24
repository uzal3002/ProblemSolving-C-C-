#include <stdio.h>

int swapping()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int temp = a;
    a = b;
    b = temp;

    printf("%d %d", a, b);
}

int main() {
    swapping();
    return 0;
}