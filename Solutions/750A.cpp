#include <stdio.h>
int main()
{
    int sum = 0, a, i, n, total, b, c = 1;
    scanf("%d%d", &n, &a);
    total = 240 - a;
    for (i = 1; i <= n; i++)
    {
        b = 5 * i;
        sum += b;
        if (total == sum)
        {
            sum = i;
            c = 0;
            break;
        }
        if (total < sum)
        {
            sum = i - 1;
            c = 0;
            break;
        }
    }
    if (c == 0)
        printf("%d\n", sum);
    if (c == 1)
        printf("%d\n", n);
    return 0;
}