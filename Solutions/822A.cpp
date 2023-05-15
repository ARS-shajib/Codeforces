#include <stdio.h>
long long factorial(long long a)
{
    if (a == 0 || a == 1)
        return 1;
    return a * factorial(a - 1);
}
int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if (a < b)
        printf("%lld\n", factorial(a));
    else
        printf("%lld\n", factorial(b));
    return 0;
}