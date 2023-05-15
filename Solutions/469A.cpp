#include <stdio.h>
int main()
{
    int i, a, n, d, e, b, c = 1;
    int ara[100];
    for (i = 1; i <= 100; i++)
        ara[i] = 0;
    scanf("%d", &n);
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b);
        ara[b]++;
    }
    scanf("%d", &d);
    for (i = 0; i < d; i++)
    {
        scanf("%d", &e);
        ara[e]++;
    }
    for (i = 1; i <= n; i++)
    {
        if (ara[i] == 0)
        {
            c = 0;
        }
    }
    if (c == 0)
    {
        printf("Oh, my keyboard!\n");
    }
    else
        printf("I become the guy.\n");
    return 0;
}