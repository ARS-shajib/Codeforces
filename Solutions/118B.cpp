#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < 2 * n + 1; i++)
    {
        if (i <= n)
        {
            for (j = 0; j < n - i; j++)
                printf("  ");
            for (j = 0; j <= i; j++)
            {
                if (i != 0)
                    printf("%d ", j);
                else
                    printf("%d", j);
            }
            // printf("%d",j);
            for (j = i; j > 0; j--)
            {
                if (j != 1)
                    printf("%d ", j - 1);
                else
                    printf("%d", j - 1);
            }
            printf("\n");
        }
        else
        {
            for (j = 0; j < i - n; j++)
                printf("  ");
            for (j = 0; j <= 2 * n - i; j++)
            {
                if (i != 2 * n)
                    printf("%d ", j);
                else
                    printf("%d", j);
            }
            for (j = 2 * n - i - 1; j >= 0; j--)
            {
                if (j > 0)
                    printf("%d ", j);
                else
                    printf("%d", j);
            }
            printf("\n");
        }
    }
    return 0;
}