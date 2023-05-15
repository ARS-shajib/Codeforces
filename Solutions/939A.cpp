#include <stdio.h>
int main()
{
    int ara[5001];
    int a, b, c = 0, n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &ara[i]);
    for (i = 1; i <= n; i++)
    {
        a = ara[i];
        b = ara[a];
        if (ara[b] == i)
        {
            printf("YES\n");
            c = 1;
            break;
        }
    }
    if (c == 0)
        printf("NO\n");
    return 0;
}