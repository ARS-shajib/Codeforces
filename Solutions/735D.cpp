#include <stdio.h>
#include <math.h>
int prime(long long int a)
{
    int i, n;
    n = sqrt(a);
    for (i = 2; i <= n; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n == 2)
        printf("1\n");
    else if (n % 2 == 0)
        printf("2\n");
    else
    {
        if (prime(n))
            printf("1\n");
        else if (prime(n - 2))
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}