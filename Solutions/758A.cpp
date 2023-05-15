#include <stdio.h>
int main()
{
    int ara[100];
    int max = 0, sum = 0, i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
        if (max < ara[i])
            max = ara[i];
    }
    for (i = 0; i < n; i++)
    {
        sum += max - ara[i];
    }
    printf("%d\n", sum);
    return 0;
}