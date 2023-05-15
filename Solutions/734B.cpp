#include <stdio.h>
int main()
{
    int ara[5];
    int a, b, sum = 0, temp, i, j;
    scanf("%d%d%d%d", &ara[0], &a, &ara[1], &ara[2]);
    b = ara[0];
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j <= 2; j++)
        {
            if (ara[j] < ara[i])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    sum += 256 * ara[0];
    b = b - ara[0];
    if (b >= a)
        sum += 32 * a;
    else
        sum += 32 * b;
    printf("%d\n", sum);
    return 0;
}