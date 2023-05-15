#include <stdio.h>
int main()
{
    int max, a, b, min, x, y, z = 0, c;
    scanf("%d%d", &a, &b);
    max = (a > b) ? a : b;
    min = (a > b) ? b : a;
    x = max / 2;
    y = min / 1;
    if (max % 2 == 1 && min >= 2)
    {
        z = min / 2;
    }
    c = x * y + z;
    printf("%d\n", c);
    return 0;
}