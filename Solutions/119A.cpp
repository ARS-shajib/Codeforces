#include <stdio.h>
int gdc(int a, int b)
{
    while (b != 0)
    {
        int i;
        i = b;
        b = a % b;
        a = i;
    }
    return a;
}
int main()
{
    int a, b, n, i, x;
    scanf("%d%d%d", &a, &b, &n);
    while (n != 0)
    {
        i = gdc(a, n);
        n = n - i;
        x = 1;
        if (n != 0)
        {
            i = gdc(b, n);
            n = n - i;
            x = 2;
        }
    }
    if (x == 1)
        printf("0\n");
    if (x == 2)
        printf("1\n");
    return 0;
}