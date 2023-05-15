#include <stdio.h>
#include <stdlib.h>
int ara[1000001];
int ara1[10000000];
int comparefunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    ara[0] = 0;
    int n, i, m, a, j, count;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &ara[i]);
    // qsort(ara,n+1,sizeof(int),comparefunc);
    for (i = 1; i <= n; i++)
        ara[i] += ara[i - 1];
    // for(i=0;i<=n;i++)
    //   printf("%d\t",ara[i]);
    // printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = ara[i] + 1; j <= ara[i + 1]; j++)
        {
            ara1[j] = i + 1;
        }
    }
    ara1[j] = n;
    //  for(i=0;i<j;i++)
    // printf("%d\t",ara1[i]);
    // printf("\n");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a);
        printf("%d\n", ara1[a]);
    }
    return 0;
}