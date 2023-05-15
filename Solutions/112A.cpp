#include <stdio.h>
int main()
{
    char s[101], s1[101];
    int sum = 0, len, m = 0, i;
    scanf("%s", s);
    scanf("%s", s1);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] = 'a' + s[i] - 'A';
        if (s1[i] >= 65 && s1[i] <= 90)
            s1[i] = 'a' + s1[i] - 'A';

        if (s[i] > s1[i])
        {
            printf("1\n");
            m = 1;
            break;
        }
        if (s[i] < s1[i])
        {
            printf("-1\n");
            m = 1;
            break;
        }
    }
    if (m == 0)
        printf("0\n");
    return 0;
}