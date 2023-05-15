#include <stdio.h>
int main()
{
    char s[51];
    int m = 0, i, j, a;
    scanf("%d", &a);
    scanf("%s", s);
    for (i = 0; i <= a - 2; i++)
    {
        j = i + 1;
        if (s[i] == s[j])
            m++;
    }
    printf("%d\n", m);
    return 0;
}