#include <stdio.h>
int main()
{
    int n, i, j, sum;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        for (i = 1, j = n * n; i <= n * n / 2; i++, j--)
        {
            printf("%d %d ", i, j);
            if (i % (n / 2) == 0)
                printf("\n");
        }
    }
    else
    {
        sum = n * (n + 1) / 2;
        for (i = 1, j = n * n; i <= n * n / 2; i++, j--)
        {
            printf("%d %d ", i, j);
            if (i % (n / 2) == 0)
            {
                printf("%d\n", n * n / 2 + 1);
            }
        }
    }
    return 0;
}