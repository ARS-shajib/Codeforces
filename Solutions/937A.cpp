#include <stdio.h>
int main()
{
    int ara[100];
    int i, n, j, count = 0, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[j] > ara[i])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (ara[i] != ara[i + 1] && ara[i] != 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}