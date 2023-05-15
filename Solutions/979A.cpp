#include <stdio.h>
int main()
{
    long long int ans, n;
    scanf("%lld", &n);
    if (n % 2 == 1 || n == 0)
        ans = (n + 1) / 2;
    else
        ans = n + 1;
    printf("%lld\n", ans);
    return 0;
}