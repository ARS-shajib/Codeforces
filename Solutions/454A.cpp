#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2 + 1)
        {
            for (j = 0; j < n / 2 + 1 - i; j++)
                printf("*");
            for (j = 0; j < 2 * i - 1; j++)
                printf("D");
            for (j = 0; j < n / 2 + 1 - i; j++)
                printf("*");
            printf("\n");
        }
        else
        {
            for (j = 0; j < i - n / 2 - 1; j++)
                printf("*");
            for (j = 0; j < n * 2 + 1 - i * 2; j++)
                printf("D");
            for (j = 0; j < i - n / 2 - 1; j++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}