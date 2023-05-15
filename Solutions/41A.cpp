#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], a[101];
    int len, m = 0, i;
    scanf("%s", s);
    scanf("%s", a);
    len = strlen(s);
    strrev(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] != a[i])
            m = 1;
    }
    if (m == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}