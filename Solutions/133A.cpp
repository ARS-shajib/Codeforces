#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    int i, len, m = 0, n = 0;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] == '+' && (s[i + 1] == '1' || s[i + 1] == '+') && (s[len - 1] == 'H' || s[len - 1] == 'Q'))
            n = 1;
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || n == 1)
        {
            m = 1;
        }
    }
    if (s[0] == 'H' || s[0] == 'Q' || s[0] == '9')
        printf("YES\n");
    else if (m == 0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}