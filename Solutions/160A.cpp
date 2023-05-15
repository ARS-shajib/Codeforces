#include <stdio.h>
int main()
{
    int ara[101];
    int t, i, sum = 0, maal = 0, temp, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &ara[i]);
        sum += ara[i];
    }
    for (i = 0; i < t - 1; i++)
    {
        for (j = i + 1; j < t; j++)
        {
            if (ara[i] < ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    for (i = 0; i < t; i++)
    {
        maal += ara[i];
        if (maal > sum / 2)
            break;
    }
    printf("%d\n", i + 1);
    return 0;
}