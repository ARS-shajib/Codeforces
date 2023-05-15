#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    int len, i, a = 0, b = 0;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] == '-')
        {
            a++;
        }
        if (s[i] == 'o')
        {
            b++;
        }
    }
    if (b == 0)
        printf("YES\n");
    else if (a % b == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}