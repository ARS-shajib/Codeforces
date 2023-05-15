#include <stdio.h>
int ara[10000000];
int main()
{
    int i, a, sum1 = 0;
    double sum = 0;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &ara[i]);
        sum += ara[i];
    }
    for (i = 0; i < a; i++)
    {
        sum1 += ara[i];
        if (ceil(sum / 2) <= sum1)
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    return 0;
}