#include <stdio.h>
int main()
{
    long long int i, j, n;
    long long int ara[20];
    ara[0] = 1;
    ara[1] = 1;
    for (i = 2; i < 20; i++)
        ara[i] = ara[i - 1] + ara[i - 2];
    scanf("%lld", &n);
    i = 1;
    j = 1;
    while (1)
    {
        if (i == ara[j])
        {
            printf("O");
            j++;
            i++;
            if (i - 1 == n)
                break;
        }
        else
        {
            printf("o");
            i++;
            if (i - 1 == n)
                break;
        }
    }
    printf("\n");
    return 0;
}