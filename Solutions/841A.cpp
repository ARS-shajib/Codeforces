#include <stdio.h>
int main()
{
    char s[101];
    int ara[26];
    int i, len, j, k;
    for (i = 0; i < 26; i++)
        ara[i] = 0;
    scanf("%d%d", &len, &k);
    scanf("%s", s);
    for (i = 0; i < len; i++)
        ara[s[i] - 'a']++;
    for (j = 0; j < 26; j++)
    {
        if (ara[j] > k)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}