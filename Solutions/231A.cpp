#include <stdio.h>
int main()
{
    int ara[4];
    int t, m = 0, i, sum, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &ara[j]);
            sum += ara[j];
        }
        if (sum >= 2)
            m++;
    }
    printf("%d\n", m);
    return 0;
}