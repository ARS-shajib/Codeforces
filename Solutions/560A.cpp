#include <stdio.h>
int main()
{
    int a, t, i, b = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            printf("-1\n");
            b = 1;
        }
    }
    if (b == 0)
        printf("1\n");
    return 0;
}