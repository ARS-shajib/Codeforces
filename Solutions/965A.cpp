#include <stdio.h>
int main()
{
    int k, n, s, p, a, b;
    scanf("%d%d%d%d", &k, &n, &s, &p);
    a = n / s;
    if (n % s != 0)
        a++;
    b = (k * a) / p;
    if ((k * a) % p != 0)
        b++;
    printf("%d\n", b);
    return 0;
}