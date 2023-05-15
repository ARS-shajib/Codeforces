#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double r, a, b, c, d, sum;
    scanf("%lf%lf%lf%lf%lf", &r, &a, &b, &c, &d);
    sum = ceil(sqrt(pow(a - c, 2) + pow(b - d, 2)) / (2 * r));
    printf("%0.0lf\n", sum);
    return 0;
}