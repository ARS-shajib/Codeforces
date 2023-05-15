#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    int n = 0, m = 0, len, i;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            n++;
        else
            m++;
    }
    if (n <= m)
    {
        for (i = 0; i < len; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                s[i] = 'a' + s[i] - 'A';
        }
    }
    else
    {
        for (i = 0; i < len; i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
                s[i] = 'A' + s[i] - 'a';
        }
    }
    printf("%s", s);
    return 0;
}