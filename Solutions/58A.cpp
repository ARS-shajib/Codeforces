#include <stdio.h>
int main()
{
    char s[101];
    char a[6];
    char b[] = "hello";
    int len, m = 0, i, j;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0, j = 0; i < len; i++)
    {
        if (b[j] == s[i])
        {
            a[j] = s[i];
            j++;
        }
        a[5] = '\0';
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] != b[i])
            m = 1;
    }
    if (m == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}