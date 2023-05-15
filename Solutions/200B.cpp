#include <stdio.h>
int main()
{
    int t, sum = 0, i, a;
    double n;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    n = sum * 1.0 / t;
    printf("%.12lf\n", n);
    return 0;
}