#include <stdio.h>
int main()
{
    int a, b, x, count = 0, temp, i;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (i = 0; i < sqrt(a); i++)
    {
        x = b - i * i;
        if (x >= 0 && x * x + i == a)
            count++;
    }
    if (a == 1 && b == 1)
        count *= 2;
    printf("%d\n", count);
    return 0;
}