#include <stdio.h>
int ara[26];
int ara1[26];
int main()
{
    char s[10000];
    char s1[10000];
    int sum = 0, i, a, b;
    scanf("%s", s);
    scanf("%s", s1);
    a = strlen(s);
    b = strlen(s1);
    for (i = 0; i < a; i++)
    {
        ara[s[i] - 'a']++;
    }
    for (i = 0; i < b; i++)
    {
        ara1[s1[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        if (ara[i] == 0 && ara1[i] != 0)
        {
            printf("-1\n");
            return 0;
        }
        if (ara[i] > ara1[i])
            sum += ara1[i];
        else
            sum += ara[i];
    }
    printf("%d\n", sum);
    return 0;
}