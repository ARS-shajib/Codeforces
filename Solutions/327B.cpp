#include <stdio.h>
int main()
{
    long long int a = 1000000, n, i;
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
    {
        printf("%lld ", a);
        a++;
    }
    return 0;
}