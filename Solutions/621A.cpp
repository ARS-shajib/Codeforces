#include <stdio.h>
int main()
{
    long long int n, m, min = 9999999991, sum = 0, i;
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &m);
        sum += m;
        if (min > m && m % 2 == 1)
            min = m;
    }
    if (sum % 2 == 1)
        sum -= min;
    printf("%lld\n", sum);
    return 0;
}