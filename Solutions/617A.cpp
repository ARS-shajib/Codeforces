#include <stdio.h>
int main()
{
    int a, x;
    scanf("%d", &a);
    if (a % 5 == 0)
        x = a / 5;
    else
        x = a / 5 + 1;
    printf("%d\n", x);
    return 0;
}