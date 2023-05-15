#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (c == 0 && a != b)
    {
        printf("NO\n");
        return 0;
    }
    if (a == b)
    {
        printf("YES\n");
        return 0;
    }
    if ((b - a) % c == 0 && ((b - a < 0 && c < 0) || (b - a > 0 && c > 0)))
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}