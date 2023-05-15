#include <stdio.h>
int main()
{
    long long int i, a, k;
    scanf("%lld%lld", &a, &k);
    for (i = 0; i < k; i++)
    {
        if (a % 10 == 0)
        {
            a = a / 10;
        }
        else
        {
            a = a - 1;
        }
    }
    printf("%lld\n", a);
    return 0;
}