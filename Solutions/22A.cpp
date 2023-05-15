#include <stdio.h>
int main()
{
    int t, i, temp, j, b = 0;
    int ara[101];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < t - 1; i++)
    {
        for (j = i + 1; j < t; j++)
        {
            if (ara[i] > ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    for (i = 0; i < t; i++)
    {
        if (ara[0] < ara[i])
        {
            printf("%d\n", ara[i]);
            b = 1;
            break;
        }
    }
    if (b == 0)
        printf("NO\n");
    return 0;
}