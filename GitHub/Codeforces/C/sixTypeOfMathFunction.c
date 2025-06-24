#include <stdio.h>
#include <string.h>
#include <math.h>

void sum()
{
    double a, b, c;
    int d, e, f;
    scanf("%lf %lf %lf %d %d %d", &a, &b, &c, &d, &e, &f);

    int ceilValue = ceil(a);
    int floorValue = floor(b);
    int roundValue = round(c);
    int powValue = pow(d, 4);
    int sqrValue = sqrt(e);
    int absValue = abs(f);
    printf(" %d\n %d\n %d\n %d\n %d\n %d", ceilValue, floorValue, roundValue, powValue, sqrValue, absValue);
}

int main() {
    sum();
    
    return 0;
}