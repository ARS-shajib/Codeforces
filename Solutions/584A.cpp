#include <stdio.h>
int main()
{
    int n, i, t;
    scanf("%d%d", &n, &t);
    if (n == 1 && t == 10)
    {
        printf("-1\n");
        return 0;
    }
    if (t != 10)
    {
        for (i = 0; i < n; i++)
            printf("%d", t);
        printf("\n");
    }
    else
    {
        for (i = 0; i < n - 1; i++)
            printf("1");
        printf("0\n");
    }
    return 0;
}