#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if (a % 2 == 0 && a / 2 >= b)
        printf("%lld\n", 2 * b - 1);
    else if (a % 2 == 0 && a / 2 < b)
    {
        b = b - a / 2;
        printf("%lld\n", 2 * b);
    }
    else if (a % 2 != 0 && a / 2 + 1 >= b)
        printf("%lld\n", 2 * b - 1);
    else
    {
        b = b - a / 2 - 1;
        printf("%lld\n", 2 * b);
    }
    return 0;
}