#include <stdio.h>
int main()
{
    int i, len, a = 1, j, b = 1;
    char s[51];
    scanf("%s", s);
    len = strlen(s);
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            b = 0;
        }
        if (s[i] != s[i + 1])
        {
            a = 0;
        }
    }
    if (b == 0)
        printf("%d\n", len);
    else if (a == 0)
        printf("%d\n", len - 1);
    else
        printf("0\n");
    return 0;
}