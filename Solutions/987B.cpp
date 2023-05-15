#include <stdio.h>
int main()
{
    long long int x, y;
    scanf("%lld%lld", &x, &y);
    if (x == 1 && y > 1)
        printf("<\n");
    else if (x == 2 && y == 3)
        printf("<\n");
    else if (x == 3 && y == 2)
        printf(">\n");
    else if (y == 1 && x > 1)
        printf(">\n");
    else if (x == y)
        printf("=\n");
    else if ((x == 2 && y == 4) || (x == 4 && y == 2))
        printf("=\n");
    else if (x > y)
        printf("<\n");
    else
        printf(">\n");
    return 0;
}