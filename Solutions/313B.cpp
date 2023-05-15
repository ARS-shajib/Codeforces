#include <stdio.h>
#include <string.h>
int ara[100005];
int main()
{
    char s[1000000];
    int n, i, a, b, c;
    scanf("%s", s);
    c = strlen(s);
    for (i = 1; i < c; i++)
    {
        if (s[i] == s[i - 1])
        {
            ara[i] = ara[i - 1] + 1;
        }
        else
        {
            ara[i] = ara[i - 1];
        }
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", ara[b - 1] - ara[a - 1]);
    }
    return 0;
}