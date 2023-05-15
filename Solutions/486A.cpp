#include <stdio.h>
int main()
{
    long long int n, ans;
    scanf("%lld", &n);
    if (n % 2 == 0)
        ans = n / 2;
    else
        ans = n / 2 - n;
    printf("%lld\n", ans);
    return 0;
}