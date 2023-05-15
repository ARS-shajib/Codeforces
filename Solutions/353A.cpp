#include <stdio.h>
int main()
{
    int ara[100];
    int ara1[100];
    int n, a = 1, i, sum = 0, sum1 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &ara[i], &ara1[i]);
        sum += ara[i];
        sum1 += ara1[i];
    }
    if (sum % 2 == 0 && sum1 % 2 == 0)
    {
        printf("0\n");
        a = 0;
    }

    else if (sum % 2 == 1 && sum1 % 2 == 1)
    {
        for (i = 0; i < n; i++)
        {
            if ((ara[i] % 2 == 0 && ara1[i] % 2 == 1) || (ara[i] % 2 == 1 && ara1[i] % 2 == 0))
            {
                printf("1\n");
                a = 0;
                break;
            }
        }
    }
    if (a == 1)
        printf("-1\n");
    return 0;
}