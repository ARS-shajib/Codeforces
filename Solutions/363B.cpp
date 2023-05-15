#include <stdio.h>
long long int ara[1000000];
int main()
{
    long long int i, n, z = 1, m, min = 10000000000000000;
    scanf("%lld%lld", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &ara[i]);
    }
    for (i = 1; i < n; i++)
        ara[i] += ara[i - 1];
    for (i = n - 1; i >= m; i--)
    {
        ara[i] = ara[i] - ara[i - m];
    }
    for (i = m - 1; i < n; i++)
    {
        if (min > ara[i])
        {
            min = ara[i];
            z = i - m + 2;
        }
    }
    printf("%lld\n", z);
    return 0;
}