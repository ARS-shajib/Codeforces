#include <stdio.h>
int main()
{
    int len, i;
    char s[101];
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = 'a' + s[i] - 'A';
        }
    }
    for (i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            continue;
        }
        else
            printf(".%c", s[i]);
    }
    return 0;
}