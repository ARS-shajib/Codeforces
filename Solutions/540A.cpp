#include <stdio.h>
int main()
{
    char s[1001];
    char str[1001];
    int len, i, a, sum = 0;
    scanf("%d", &len);
    scanf("%s", s);
    scanf("%s", str);
    for (i = 0; i < len; i++)
    {
        a = abs(s[i] - str[i]);
        if (a > 5)
            a = 10 - a;
        sum += a;
    }
    printf("%d\n", sum);
    return 0;
}