#include <stdio.h>
int main()
{
    int n, max = 0, sum = 0, a, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum -= a;
        scanf("%d", &a);
        sum += a;
        if (max < sum)
            max = sum;
    }
    printf("%d\n", max);
    return 0;
}