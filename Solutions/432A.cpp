#include <stdio.h>
int main()
{
    int a, b, count = 0, j, i;
    scanf("%d %d", &a, &b);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &j);
        if (j <= 5 - b)
            count++;
    }
    count = count / 3;
    printf("%d\n", count);
    return 0;
}