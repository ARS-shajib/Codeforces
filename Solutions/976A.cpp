#include <stdio.h>
#include <string.h>
int main()
{
    int i, len, t, j;
    char str[10001];
    scanf("%d", &t);
    scanf("%s", str);
    len = strlen(str);
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] == '1' && str[i - 1] == '0')
        {
            str[i] = '0';
            str[i - 1] = '1';
            t--;
            if (t == 0)
                break;
        }
        else if (str[i] == '1' && str[i - 1] == '1')
        {
            for (j = i + 1; j < len; j++)
            {
                str[j - 1] = str[j];
            }
            str[j - 1] = '\0';
            t--;
            if (t == 0)
                break;
        }
    }
    printf("%s\n", str);
    return 0;
}