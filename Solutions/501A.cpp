#include <stdio.h>
int main()
{
    int a, b, c, d, suma1, suma2, sumb1, sumb2;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    suma1 = 3 * a / 10;
    suma2 = a - a / 250 * c;
    sumb1 = 3 * b / 10;
    sumb2 = b - b / 250 * d;
    if (suma1 >= suma2)
        a = suma1;
    else
        a = suma2;
    if (sumb1 >= sumb2)
        b = sumb1;
    else
        b = sumb2;
    if (a > b)
        printf("Misha\n");
    else if (b > a)
        printf("Vasya\n");
    else
        printf("Tie\n");
    return 0;
}