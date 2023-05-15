#include <stdio.h>
int main()
{
    int len, i, j, a, count = 0;
    char s[51];
    char ch[2];
    scanf("%d%d", &len, &a);
    scanf(" %[^\n]", s);
    for (i = 0; i < a; i++)
    {
        for (j = len - 2; j >= 0; j--)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                ch[0] = s[j];
                s[j] = s[j + 1];
                s[j + 1] = ch[0];
                j--;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}