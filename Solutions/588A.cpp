#include <stdio.h>
int ara[100000];
int main()
{
    int t, i, a, b = 0, sum = 0, j, answer, min, count = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &ara[i]);
        if (sum == 0)
        {
            min = ara[0];
            sum = 1;
        }
        if (min > ara[i])
            min = ara[i];
        b += a * min;
    }
    printf("%d\n", b);
    return 0;
}
 