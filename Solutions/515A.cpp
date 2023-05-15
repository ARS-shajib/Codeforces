#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;
    if (c < 0)
        c *= -1;
    if (a + b == c || (c - a + b) % 2 == 0 && a + b < c)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}