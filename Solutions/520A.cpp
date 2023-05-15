#include <stdio.h>
int main()
{
    char s[101];
    int i, len, a = 0;
    int count[27];
    for (i = 0; i < 26; i++)
        count[i] = 0;
    scanf("%d", &len);
    scanf("%s", s);
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= s[i])
        {
            count[s[i] - 'a']++;
        }
        else
            count[s[i] - 'A']++;
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            a = 1;
            printf("NO\n");
            break;
        }
    }
    if (a == 0)
        printf("YES\n");
    return 0;
}