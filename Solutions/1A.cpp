#include <stdio.h>
int main()
{
    long long int n, m, a, i, j, z;
    scanf("%lld %lld %lld", &n, &m, &a);
    i = n / a;
    if (n % a != 0)
        i++;
    j = m / a;
    if (m % a != 0)
        j++;
    z = i * j;
    printf("%lld\n", z);
    return 0;
}