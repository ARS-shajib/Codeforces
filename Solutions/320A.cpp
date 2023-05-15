#include <stdio.h>
int main()
{
    char s[20];
    int i;
    scanf("%s", s);
    if (strcmp(s, "1") == 0 || strcmp(s, "14") == 0 || strcmp(s, "144") == 0)
    {
        printf("YES\n");
        return 0;
    }
    if (s[0] == '4')
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        for (i = 0; i < strlen(s); i++)
        {
            if (s[i] == '4' && s[i + 1] == '4' && s[i + 2] == '4')
            {
                printf("NO\n");
                return 0;
            }
            if (s[i] != '4' && s[i] != '1')
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}