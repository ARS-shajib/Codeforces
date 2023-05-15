#include <stdio.h>
int main()
{
    long long int c, a, n, m, b, d, e, f;
    scanf("%lld%lld%lld%lld", &n, &m, &a, &b);
    c = n % m;
    d = m - n % m;
    b = b * c;
    a = a * d;
    if (a > b)
        printf("%lld\n", b);
    else
        printf("%lld\n", a);
    return 0;
}