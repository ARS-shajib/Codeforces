#include <stdio.h>
int main()
{
    char s[101];
    char str[101];
    int a, i;
    scanf("%s", s);
    scanf("%s", str);
    a = strlen(s);
    for (i = 0; i < a; i++)
    {
        if ((s[i] == '0' && str[i] == '1') || (s[i] == '1' && str[i] == '0'))
            s[i] = '1';
        else
            s[i] = '0';
    }
    printf("%s", s);
    return 0;
}