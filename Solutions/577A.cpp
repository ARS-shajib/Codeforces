#include <stdio.h>
int main()
{
    int i, j, n, x, a, count = 0;
    scanf("%d%d", &n, &x);
    for (i = 1; i <= n; i++)
    {
        if (x / i <= n && x % i == 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}