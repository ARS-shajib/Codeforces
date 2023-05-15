#include <stdio.h>
int main()
{
    char str[1001][6];
    int t, a = 10, b = 10, i, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", str[i]);
        for (j = 0; j < 5; j++)
        {
            if (str[i][j] == 'O' && str[i][j + 1] == 'O' && a == 10 && b == 10)
            {
                a = i;
                b = j;
            }
        }
    }
    if (b != 10)
    {
        str[a][b] = '+';
        str[a][b + 1] = '+';
        printf("YES\n");
        for (i = 0; i < t; i++)
        {
            str[i][5] = '\0';
            printf("%s\n", str[i]);
        }
    }
    else
        printf("NO\n");
    return 0;
}