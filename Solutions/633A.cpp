#include <stdio.h>
int main()
{
    int a, b, c, temp;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (c >= 0)
    {
        if (c % b == 0)
        {
            printf("Yes\n");
            return 0;
        }
        c -= a;
    }
    printf("No\n");
    return 0;
}