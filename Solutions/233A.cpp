#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    if (n % 2 == 1)
        printf("-1\n");
    else
    {
        for (i = 1; i <= n; i += 2)
        {
            printf("%d %d ", i + 1, i);
        }
    }
    return 0;
}