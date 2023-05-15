#include <stdio.h>
int ara[100];
int main()
{
    char s[101];
    char a[3];
    int len, i, b = 0, j, max = 0;
    scanf("%d", &len);
    scanf("%s", s);
    for (i = 0; i < len; i++)
    {
        a[0] = s[i];
        a[1] = s[i + 1];
        for (j = i + 1; j < len; j++)
        {
            if (a[0] == s[j] && a[1] == s[j + 1])
                ara[i]++;
            if (ara[i] > max)
            {
                max = ara[i];
                b = i;
            }
        }
    }
    printf("%c%c\n", s[b], s[b + 1]);
    return 0;
}