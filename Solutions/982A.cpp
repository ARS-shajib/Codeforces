#include <stdio.h>
#include <string.h>
int main()
{
    int a, i, b = 0;
    char s[10001];
    scanf("%d", &a);
    scanf("%s", s);
    for (i = 0; i < a; i++)
    {
        if ((s[0] == '0' && s[1] == '0') || (s[a - 2] == '0' && s[a - 1] == '0') || (s[i] == '1' && s[i + 1] == '1') || (s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0') || (a == 1 && s[0] == '0'))
        {
            printf("NO\n");
            b = 1;
            return 0;
        }
    }
    if (b == 0)
    {
        printf("YES\n");
    }
    return 0;
}