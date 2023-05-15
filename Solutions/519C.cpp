#include <stdio.h>
int main()
{
    long long int a, b, sum;
    scanf("%lld %lld", &a, &b);
    sum = a + b;
    sum /= 3;
    if (a > b && a / 2 > b)
        printf("%lld\n", b);
    else if (sum > a)
        printf("%lld\n", a);
    else
        printf("%lld\n", sum);
    return 0;
}