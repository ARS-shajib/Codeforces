#include <stdio.h>
long long ara[1000];
int main()
{
    long long int n, l, i, temp, j, max = 0, a, b;
    double ans, ans1;
    scanf("%lld%lld", &n, &l);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &ara[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[j] < ara[i])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
        // printf("%lld\n",ara[i]);
    }
    if (ara[0] < l - ara[n - 1])
        a = l - ara[n - 1];
    else
        a = ara[0];
    for (i = 0; i < n - 1; i++)
    {
        b = ara[i + 1] - ara[i];
        if (max < b)
            max = b;
    }
    ans = max * 1.0 / 2;
    ans1 = a * 1.0;
    if (ans > ans1)
        printf("%.10f\n", ans);
    else
        printf("%.10f\n", ans1);
    return 0;
}