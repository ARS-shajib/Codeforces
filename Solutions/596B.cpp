#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    long long int ara[n + 1];
    long long int sum = 0;
    ara[0] = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &ara[i]);
        sum += abs(ara[i] - ara[i - 1]);
    }
    printf("%lld\n", sum);
    return 0;
}