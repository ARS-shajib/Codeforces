#include <stdio.h>
int main()
{
    int a, sum, i, b, c;
    scanf("%d%d", &a, &b);
    sum = a;
    for (i = 0;; i++)
    {
        c = a % b;
        a = a / b;
        sum += a;
        if (a == 0)
            break;
        a += c;
    }
    printf("%d\n", sum);
    return 0;
}