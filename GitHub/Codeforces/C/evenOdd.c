#include <stdio.h>
#include <string.h>

void sum(int n)
{
    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main(){
    sum(50);
    return 0;
}