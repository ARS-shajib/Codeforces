#include <stdio.h>
int main()
{
    int a, b = 0, count = 0, i, n, max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (b < a)
        {
            count++;
        }
        else
        {
            if (max < count)
                max = count;
            count = 1;
        }
        b = a;
    }
    if (max < count)
        printf("%d\n", count);
    else
        printf("%d\n", max);
    return 0;
}