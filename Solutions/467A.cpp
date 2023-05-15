#include <stdio.h>
int main()
{
    int a, b, count = 0, i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);
        if (b - a >= 2)
            count++;
    }
    printf("%d\n", count);
    return 0;
}