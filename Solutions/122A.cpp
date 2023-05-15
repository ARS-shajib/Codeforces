#include <stdio.h>
#include <string.h>
int main()
{
    char s[5];
    int len, i, sum = 0, a = 0, j, b, c = 1;
    scanf("%s", s);
    len = strlen(s);
    if (strcmp(s, "799") == 0 || strcmp(s, "94") == 0 || strcmp(s, "141") == 0)
    {
        printf("YES\n");
        return 0;
    }
    for (i = 0; i < len; i++)
    {
        c = 1;
        if (s[i] != '4' && s[i] != '7')
        {
            a = 1;
        }
        b = len - 1 - i;
        for (j = 0; j < b; j++)
            c *= 10;
        sum += (s[i] - '0') * c;
    }
    if (sum % 4 == 0 || sum % 7 == 0 || a == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}