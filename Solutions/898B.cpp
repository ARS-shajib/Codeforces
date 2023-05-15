#include <stdio.h>
int main()
{
    int m, n, a, b, count = 0;
    scanf("%d%d%d", &n, &a, &b);
    m = n;
    if (a > b)
    {
        while (n > 0)
        {
            if (n % a == 0)
            {
                printf("YES\n%d %d\n", n / a, count);
                return 0;
            }
            n = n - b;
            count++;
        }
    }
    else
    {
        while (n > 0)
        {
            if (n % b == 0)
            {
                printf("YES\n%d %d\n", count, n / b);
                return 0;
            }
            n = n - a;
            count++;
        }
    }
    count = 0;
    if (a > b)
    {
        while (m > 0)
        {
            if (m % b == 0)
            {
                printf("YES\n%d %d\n", count, m / b);
                return 0;
            }
            m = m - a;
            count++;
        }
    }
    else
    {
        while (m > 0)
        {
            if (m % a == 0)
            {
                printf("YES\n%d %d\n", m / a, count);
                return 0;
            }
            m = m - b;
            count++;
        }
    }
    printf("NO\n");
    return 0;
}