#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (c >= a && ((c - a) % b == 0 || ((c - a) % b == 1 && (c - a) / b != 0)))
        printf("YES\n");
    else if (c % b == a || (c % b == a + 1 && c / b != 0))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}