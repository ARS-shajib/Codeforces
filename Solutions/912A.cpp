#include <stdio.h>
int main()
{
    long long int a, b, c, x, y, sum = 0, m;
    scanf("%lld%lld%lld%lld%lld", &x, &y, &a, &b, &c);
    m = a * 2 + b - x;
    if (m > 0)
        sum += m;
    m = c * 3 + b - y;
    if (m > 0)
        sum += m;
    printf("%lld\n", sum);
    return 0;
}