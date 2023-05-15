#include <stdio.h>
int main()
{
    char s[101];
    int len, i, count = 0;
    scanf("%d", &len);
    scanf("%s", s);
    for (i = 0; i < len - 2; i++)
    {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
            count++;
    }
    printf("%d\n", count);
    return 0;
}