#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int b = 1, i, n, m, a, ans, sum = 0;
    scanf("%lld%lld", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%lld", &a);
        ans = a - b;
        b = a;
        if (ans < 0)
            ans = n - abs(ans);
        sum += ans;
    }
    printf("%lld\n", sum);
    return 0;
}