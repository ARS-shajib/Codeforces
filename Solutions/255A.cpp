#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, n, i, m;
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        scanf("%d", &n);
        if (i % 3 == 1)
            a += n;
        else if (i % 3 == 2)
            b += n;
        else
            c += n;
    }
    if (a >= b && a >= c)
        printf("chest\n");
    else if (b >= a && b >= c)
        printf("biceps\n");
    else
        printf("back\n");
    return 0;
}