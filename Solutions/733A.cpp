#include <stdio.h>
int main()
{
    char s[200];
    int a = -1, count = 0, max = 0, i;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            count = i - a;
            if (max < count)
                max = count;
            a = i;
        }
    }
    if (strlen(s) - a > max && max != 0)
    {
        printf("%d\n", strlen(s) - a);
        return 0;
    }
    if (max == 0)
        printf("%d\n", strlen(s) + 1);
    else
        printf("%d\n", max);
    return 0;
}