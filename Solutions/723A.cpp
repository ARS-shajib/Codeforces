#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ara[4];
    int i, j, temp;
    scanf("%d%d%d", &ara[0], &ara[1], &ara[2]);
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (ara[i] > ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    printf("%d\n", ara[2] - ara[0]);
    return 0;
}