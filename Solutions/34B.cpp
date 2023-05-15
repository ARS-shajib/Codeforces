#include <stdio.h>
// #include<stdlib.h>
// int cmpfnc(const void *a,const void *b)
//{
//     return (*(int*)a - *(int*)b);
// }
long long int ara[100];
int main()
{
    long long int n, m, i, sum = 0, j, temp;
    scanf("%lld%lld", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%lld", &ara[i]);
    //  qsort(ara,n,sizeof(int),cmpfnc);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[i] > ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
        // printf("%d\t",ara[i]);
    }
    for (j = 0; j < m; j++)
    {
        if (ara[j] <= 0)
            sum += ara[j];
        // sum*=-1;
    }
    printf("%lld\n", -sum);
    return 0;
}