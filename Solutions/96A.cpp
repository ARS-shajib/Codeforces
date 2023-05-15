#include <stdio.h>
int main()
{
    char s[101];
    int i, len, m, n, a = 0;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            m++;
            n = 0;
        }
        else
        {
            m = 0;
            n++;
        }
        if ((n == 7 || m == 7) && a == 0)
        {
            printf("YES\n");
            a = 1;
        }
    }
    if (a == 0)
        printf("NO\n");
    return 0;
}