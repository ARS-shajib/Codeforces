#include <stdio.h>
int main()
{
    int n, i, a, count = 0;
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        a = n - i;
        if (a % i == 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}