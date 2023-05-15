#include <stdio.h>
int main()
{
    int x = 0, t, i;
    char s[4];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", s);
        if (s[1] == '-')
        {
            --x;
        }
        else
        {
            ++x;
        }
    }
    printf("%d\n", x);
    return 0;
}