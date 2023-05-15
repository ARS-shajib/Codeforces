#include <stdio.h>
#include <string.h>
char s[100000];
int main()
{
    int i, len, a = 550, b = 550, c = 550, d = 550;
    scanf("%s", s);
    len = strlen(s);
    for (i = 1; i <= len; i++)
    {
        if (s[i] == 'B' && s[i - 1] == 'A' && i - 1 != d)
        {
            if (b == 550)
            {
                a = i - 1;
                b = i;
            }
        }
        if (s[i] == 'A' && s[i - 1] == 'B' && i - 1 != b)
        {
            if (d == 550)
            {
                c = i - 1;
                d = i;
            }
        }
    }
    if (a == 550 || b == 550 || c == 550 || d == 550)
    {
        a = 550;
        b = 550;
        c = 550;
        d = 550;
        for (i = len - 1; i >= 0; i--)
        {
            if (s[i] == 'B' && s[i + 1] == 'A' && i + 1 != d)
            {
                if (b == 550)
                {
                    a = i + 1;
                    b = i;
                }
            }
            if (s[i] == 'A' && s[i + 1] == 'B' && i + 1 != b)
            {
                if (d == 550)
                {
                    c = i + 1;
                    d = i;
                }
            }
        }
    }
    if (a != 550 && b != 550 && c != 550 && d != 550)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}