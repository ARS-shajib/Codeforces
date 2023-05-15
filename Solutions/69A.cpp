#include <stdio.h>
int main()
{
    int t, sum = 0, sum1 = 0, sum2 = 0, a, b, c, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        sum += a;
        sum1 += b;
        sum2 += c;
    }
    if (sum == 0 && sum1 == 0 && sum2 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}