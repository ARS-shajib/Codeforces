#include <stdio.h>
int main()
{
    char s[101];
    int n, m, i, j, l, r;
    char ch1, ch2;
    scanf("%d%d", &n, &m);
    scanf("%s", s);
    for (i = 0; i < m; i++)
    {
        scanf("%d%d", &l, &r);
        scanf(" %c", &ch1);
        scanf(" %c", &ch2);
        for (j = l - 1; j < r; j++)
        {
            if (s[j] == ch1)
                s[j] = ch2;
        }
    }
    printf("%s\n", s);
    return 0;
}