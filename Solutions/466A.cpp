#include <stdio.h>
int main()
{
    int sum = 0, a, n, m, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);
    if (a * m > b)
    {
        sum += n / m * b;
        if (n % m != 0 && b > n % m * a)
            sum += n % m * a;
        if (n % m != 0 && b <= n % m * a)
            sum += b;
    }
    else
    {
        sum += a * n;
    }
    printf("%d\n", sum);
    return 0;
}