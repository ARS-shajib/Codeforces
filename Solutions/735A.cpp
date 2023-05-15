#include <stdio.h>
int main()
{
    int n, m, i, a;
    char s[200];
    scanf("%d%d", &n, &m);
    scanf(" %[^\n]", s);
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'G')
        {
            a = i;
            break;
        }
    }
    for (i = a; i < n; i += m)
    {
        if (s[i] == '#')
        {
            break;
        }
        else if (s[i] == 'T')
        {
            printf("YES\n");
            return 0;
        }
    }
    for (i = a; i >= 0; i -= m)
    {
        if (s[i] == '#')
        {
            break;
        }
        else if (s[i] == 'T')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}