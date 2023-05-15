#include <stdio.h>
#include <string.h>
int main()
{
    int i, len, a = 0;
    char s[1001];
    int count[26];
    for (i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    scanf(" %[^\n]", s);
    len = strlen(s);
    for (i = 1; i < len; i = i + 3)
    {
        if (count[s[i] - 'a'] == 0)
        {
            count[s[i] - 'a']++;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] == 1)
        {
            a++;
        }
    }
    printf("%d\n", a);
    return 0;
}