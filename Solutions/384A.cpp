#include <stdio.h>
int main()
{
    int sum = 0, i, j;
    double n;
    scanf("%lf", &n);
    for (i = 0; i < ceil(n / 2); i++)
        sum += ceil(n * 1.0 / 2);
    for (i = 0; i < (int)n / 2; i++)
        sum += (int)n / 2;
    printf("%d\n", sum);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i % 2 == 1 && j % 2 == 1)
            {
                printf("C");
            }
            if (i % 2 == 1 && j % 2 == 0)
            {
                printf(".");
            }
            if (i % 2 == 0 && j % 2 == 1)
            {
                printf(".");
            }
            if (i % 2 == 0 && j % 2 == 0)
            {
                printf("C");
            }
        }
        printf("\n");
    }
    return 0;
}