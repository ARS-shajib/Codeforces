#include <stdio.h>
int main()
{
    char s[101];
    int i, len, j, m, n = 0;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len - 1; i++)
    {
        m = 0;
        for (j = i + 1; j < len; j++)
        {
            if (s[i] == s[j])
                m = 1;
        }
        if (m == 0)
            n++;
    }
    n++;
    if (n % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}