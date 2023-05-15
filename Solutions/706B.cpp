#include <stdio.h>
#include <stdlib.h>
int ara[100001];
int ara1[100000];
int comparefunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    ara[0] = 1;
    int n, i, m, a, j, count;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &ara[i]);
    qsort(ara, n + 1, sizeof(int), comparefunc);
    for (i = 1; i <= n; i++)
    {
        for (j = ara[i - 1]; j < ara[i]; j++)
        {
            ara1[j] = i - 1;
        }
    }
    ara1[j] = i - 1;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a);
        if (a >= ara[n])
            printf("%d\n", n);
        else
            printf("%d\n", ara1[a]);
    }
    return 0;
}