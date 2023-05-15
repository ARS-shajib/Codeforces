#include <stdio.h>
int main()
{
    int a[4];
    int i, j, temp;
    for (i = 0; i < 4; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 4 - 1; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    temp = a[2] + a[3];
    i = a[1] + a[2];
    if (a[0] < a[1] + a[2] || a[1] < a[2] + a[3])
    {
        printf("TRIANGLE\n");
    }
    else if (a[1] == temp || a[0] == i)
        printf("SEGMENT\n");
    else
        printf("IMPOSSIBLE\n");
    return 0;
}