#include <stdio.h>
int main()
{
    int n, m, j = 0, i;
    int ara[101];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (ara[i] > 0 && ara[i] >= ara[m - 1])
            j++;
    }
    printf("%d\n", j);
    return 0;
}