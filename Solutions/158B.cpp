#include <stdio.h>
int main()
{
    int count[4];
    int sum = 0, a, i, t;
    count[0] = 0;
    count[1] = 0;
    count[2] = 0;
    count[3] = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        count[a - 1]++;
    }
    a = count[3];
    if (count[2] >= count[0] && count[1] % 2 == 0)
        sum += count[1] / 2 + count[2];
    else if (count[2] >= count[0] && count[1] % 2 == 1)
        sum += count[1] / 2 + count[2] + 1;
    else if (count[2] < count[0])
    {
        a += count[2];
        count[0] = count[0] - count[2];
        sum += count[0] * 1 + count[1] * 2;
        if (sum % 4 == 0)
            sum = sum / 4;
        else
            sum = sum / 4 + 1;
    }
    printf("%d\n", sum + a);
    return 0;
}