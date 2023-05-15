#include <stdio.h>
int ara[1000];
int main()
{
    int n, m, c, sum, j = 1, i;
    scanf("%d", &n);
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &c);
        ara[c]++;
    }
    while (1)
    {
        sum = 0;
        for (i = 1; i <= 100; i++)
            sum += ara[i] / j;
        if (sum < n)
            break;
        else
            j++;
    }
    printf("%d\n", j - 1);
    return 0;
}