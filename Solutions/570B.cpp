#include <stdio.h>
int main()
{
    long long int a, b, m, n, z;
    scanf("%lld%lld", &n, &m);
    a = n - m;
    b = m - 1;
    if (n == 1 && m == 1)
        printf("1\n");
    else if (b >= a)
        printf("%lld\n", m - 1);
    else
        printf("%lld\n", m + 1);
    return 0;
}