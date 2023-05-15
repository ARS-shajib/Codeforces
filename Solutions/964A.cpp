#include <stdio.h>
int main()
{
    int n, j, i;
    scanf("%d", &n);
    i = n / 10;
    i = i * 5;
    j = n % 10;
    if (j == 1)
        i = i + 1;
    if (j == 2 || j == 3)
        i = i + 2;
    if (j == 4 || j == 5)
        i = i + 3;
    if (j == 6 || j == 7)
        i = i + 4;
    if (j == 8 || j == 9)
        i = i + 5;
    if (j == 0 && n != 10)
        i = i + 1;
    printf("%d\n", i);
    return 0;
}
 