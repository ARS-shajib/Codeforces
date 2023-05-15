#include <stdio.h>
#include <string.h>
int main()
{
    int a = 0, i, len;
    char s[201];
    scanf(" %[^\n]", s);
    len = strlen(s);
    for (i = 0; i < len;)
    {
        if (s[i + 2] == 'B' && s[i + 1] == 'U' && s[i] == 'W' && a == 1)
        {
            a = 0;
            i = i + 3;
            printf(" ");
        }
        else if (s[i + 2] == 'B' && s[i + 1] == 'U' && s[i] == 'W' && a != 1)
            i = i + 3;
        else
        {
            printf("%c", s[i]);
            a = 1;
            i++;
        }
    }
    printf("\n");
}