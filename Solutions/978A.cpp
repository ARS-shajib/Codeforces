#include <stdio.h>
int main()
{
    int ara[1001];
    int ara1[1001];
    int i, j, count = 1, b = 1, a;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &ara[i]);
    }
    ara1[0] = ara[a - 1];
    for (i = a - 1; i >= 0; i--)
    {
        for (j = 0; j < count; j++)
        {
            if (ara[i] == ara1[j])
            {
                b = 0;
            }
        }
        if (b == 1)
        {
            ara1[j] = ara[i];
            count++;
        }
        else
            b = 1;
    }
    printf("%d\n", count);
    for (i = 0, j = count - 1; i < count / 2; i++, j--)
    {
        b = ara1[i];
        ara1[i] = ara1[j];
        ara1[j] = b;
    }
    for (i = 0; i < count; i++)
    {
        printf("%d ", ara1[i]);
    }
    printf("\n");
    return 0;
}