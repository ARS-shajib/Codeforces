#include <stdio.h>
#include <stdlib.h>
long long int ara[1000000];
int comparefunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    long long int i, n, m, x;
    long long int sum = 0;
    scanf("%lld%lld", &n, &x);
    for (i = 0; i < n; i++)
        scanf("%lld", &ara[i]);
    qsort(ara, n, sizeof(long long int), comparefunc);
    for (i = 0; i < n; i++)
    {
        sum += ara[i] * x;
        if (x != 1)
            x--;
    }
    printf("%lld\n", sum);
    return 0;
}