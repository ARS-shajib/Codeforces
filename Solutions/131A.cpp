#include <stdio.h>
int main()
{
    char s[101];
    int len, i, a = 0;
    scanf("%s", s);
    len = strlen(s);
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        for (i = 1; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                a = 1;
            }
        }
    }
    else
    {
        for (i = 1; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                a = 1;
            }
        }
        if (a == 0)
            a = 2;
    }
    if (a == 0)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
            printf("%c", s[0] - 32);
        else
            printf("%c", s[0]);
        for (i = 1; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", s[i] + 32);
            }
            else
                printf("%c", s[i]);
        }
        printf("\n");
    }
    else if (a == 1)
        printf("%s\n", s);
    else
    {
        for (i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", s[i] + 32);
            }
            else
                printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}