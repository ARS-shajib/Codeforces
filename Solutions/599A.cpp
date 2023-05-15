#include <stdio.h>
int main()
{
    int d1, d2, d3, i, j, temp;
    int ara[4];
    scanf("%d%d%d", &d1, &d2, &d3);
    ara[0] = d1 + d2 + d3;
    ara[1] = (d1 + d3) * 2;
    ara[2] = (d2 + d3) * 2;
    ara[3] = (d1 + d2) * 2;
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (ara[j] > ara[i])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    printf("%d\n", ara[3]);
    return 0;
}