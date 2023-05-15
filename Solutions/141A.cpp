#include <stdio.h>
int main()
{
    int i, j, a = 1;
    char s[101];
    int ara[26];
    int ara1[26];
    for (i = 0; i < 25; i++)
    {
        ara[i] = 0;
        ara1[i] = 0;
    }
    for (i = 0; i < 2; i++)
    {
        scanf("%s", s);
        for (j = 0; j < strlen(s); j++)
        {
            ara[s[j] - 'A']++;
        }
    }
    scanf("%s", s);
    for (j = 0; j < strlen(s); j++)
    {
        ara1[s[j] - 'A']++;
    }
    for (i = 0; i < 25; i++)
    {
        if (ara[i] != ara1[i])
        {
            a = 0;
        }
    }
    if (a == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}