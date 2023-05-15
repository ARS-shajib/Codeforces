#include <stdio.h>
int main()
{
    int ara[11][11];
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        ara[1][i] = 1;
        ara[i][1] = 1;
    }
    for (i = 2; i <= 10; i++)
    {
        for (j = 2; j <= 10; j++)
        {
            ara[i][j] = ara[i][j - 1] + ara[i - 1][j];
        }
    }
    printf("%d\n", ara[n][n]);
    return 0;
}