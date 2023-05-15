#include <stdio.h>
int main()
{
    int a, b, temp, ans;
    scanf("%d%d", &a, &b);
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d ", b);
    printf("%d\n", (a - b) / 2);
    return 0;
}