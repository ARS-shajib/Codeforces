#include <stdio.h>
int main()
{
    char s[16];
    int i, len, count = 0;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
            count++;
    }
    if (count == 1 || count == 0 && len % 2 == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}