#include <stdio.h>
int main()
{
    long long int k, n, w, i;
    scanf("%lld%lld%lld", &k, &n, &w);
    for (i = 1; i <= w; i++)
    {
        n = n - i * k;
    }
    if (n < 0)
        printf("%lld\n", -n);
    else
        printf("0\n");
    return 0;
}