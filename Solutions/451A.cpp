#include <stdio.h>
int main()
{
    int a, b, temp;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a % 2 == 0)
        printf("Malvika\n");
    else
        printf("Akshat\n");
    return 0;
}