#include <stdio.h>
int main()
{
    int n, m, i, a = 0, ans;
    scanf("%d%d", &n, &m);
    if (n % 2 == 0)
        ans = n / 2;
    else
        ans = n / 2 + 1;
    for (i = ans; i <= n; i++)
    {
        if (i % m == 0)
        {
            printf("%d\n", i);
            a = 1;
            break;
        }
    }
    if (a == 0)
        printf("-1\n");
    return 0;
}