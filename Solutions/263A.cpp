#include <stdio.h>
int main()
{
    int i, j, a, sum = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            scanf("%d", &a);
            if (a == 1)
            {
                sum = abs(3 - i) + abs(3 - j);
                printf("%d\n", sum);
            }
        }
    }
    return 0;
}