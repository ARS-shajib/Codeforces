#include <stdio.h>
int main()
{
    int len, t, i;

    char s[101];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf(" %s", s);
        len = strlen(s);
        if (len > 10)
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        else
            printf("%s\n", s);
    }
    return 0;
}
 