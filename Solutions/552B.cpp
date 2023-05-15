#include <stdio.h>
int main()
{
    long long n, m;
    scanf("%lld", &n);
    m = 8888888899;
    if (n <= 9)
        printf("%lld\n", n);
    else if (n <= 99)
    {
        n = 9 + (n - 9) * 2;
        printf("%lld\n", n);
    }
    else if (n <= 999)
    {
        n = 9 + 90 * 2 + (n - 99) * 3;
        printf("%lld\n", n);
    }
    else if (n <= 9999)
    {
        n = 9 + 90 * 2 + 900 * 3 + (n - 999) * 4;
        printf("%lld\n", n);
    }
    else if (n <= 99999)
    {
        n = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + (n - 9999) * 5;
        printf("%lld\n", n);
    }
    else if (n <= 999999)
    {
        n = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + (n - 99999) * 6;
        printf("%lld\n", n);
    }
    else if (n <= 9999999)
    {
        n = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + 900000 * 6 + (n - 999999) * 7;
        printf("%lld\n", n);
    }
    else if (n <= 99999999)
    {
        n = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + 900000 * 6 + 9000000 * 7 + (n - 9999999) * 8;
        printf("%lld\n", n);
    }
    else if (n <= 999999999)
    {
        n = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + 900000 * 6 + 9000000 * 7 + 90000000 * 8 + (n - 99999999) * 9;
        printf("%lld\n", n);
    }
    else if (n <= 9999999999)
    {
        printf("%lld\n", m);
    }
    return 0;
}