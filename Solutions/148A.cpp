#include <stdio.h>
int main()
{
    int k, l, m, n, d, i, count = 0;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    for (i = 1; i <= d; i++)
    {
        if (i % k != 0)
        {
            if (i % l != 0)
            {
                if (i % m != 0)
                {
                    if (i % n != 0)
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d\n", d - count);
    return 0;
}