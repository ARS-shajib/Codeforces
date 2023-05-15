#include <stdio.h>
int main()
{
    char s[1000][11];
    int b, a, n, m, i, x, y, j;
    scanf("%d%d", &n, &m);
    x = n;
    y = m;
    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        for (j = 0; j < m; j++)
        {
            if (s[i][j] == 'S')
            {
                x--;
                break;
            }
        }
    }
    a = x * m;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (s[j][i] == 'S')
            {
                y--;
                break;
            }
        }
    }
    b = y * n;
    printf("%d\n", a + b - x * y);
    return 0;
}