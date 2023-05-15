#include <stdio.h>
int main()
{
    int i, a, j, temp;
    int ara[101];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < a - 1; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (ara[j] < ara[i])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    for (i = 0; i < a; i++)
        printf("%d ", ara[i]);
    printf("\n");
    return 0;
}