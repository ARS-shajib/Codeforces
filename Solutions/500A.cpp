#include <stdio.h>
int main()
{
    int ara[30000];
    int t, i, n;
    scanf("%d%d", &n, &t);
    for (i = 0; i < n - 1; i++)
        scanf("%d", &ara[i]);
    i = 1;
    while (1)
    {
        i = i + ara[i - 1];
        if (i > t)
        {
            printf("NO\n");
            return 0;
        }
        if (i == t)
        {
            printf("YES\n");
            return 0;
        }
    }
}