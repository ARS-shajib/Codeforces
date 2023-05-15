#include <stdio.h>
#include <string.h>
int main()
{
    char s[19];
    int i;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == '9' && i == 0)
            continue;
        if (s[i] - '0' >= 5)
        {
            s[i] = '9' - s[i] + '0';
        }
    }
    printf("%s\n", s);
    return 0;
}