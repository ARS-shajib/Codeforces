#include <stdio.h>
int main()
{
    int a, b, i, c, count = 0;
    scanf("%d%d", &a, &b);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &c);
        if (c > b)
            count += 2;
        else
            count++;
    }
    printf("%d\n", count);
    return 0;
}