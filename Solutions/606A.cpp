#include <stdio.h>
int main()
{
    int a, b, c, gain = 0, a1, b1, c1, loss = 0;
    scanf("%d%d%d", &a, &b, &c);
    scanf("%d%d%d", &a1, &b1, &c1);
    if (a1 > a)
        loss += (a1 - a);
    if (b1 > b)
        loss += (b1 - b);
    if (c1 > c)
        loss += (c1 - c);
    if (a - a1 >= 2)
        gain += (a - a1) / 2;
    if (b - b1 >= 2)
        gain += (b - b1) / 2;
    if (c - c1 >= 2)
        gain += (c - c1) / 2;
    if (loss <= gain)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}