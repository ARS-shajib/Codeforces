#include <stdio.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
    if (a == 0)
        printf("1\n");
    else if (a % 4 == 1)
        printf("8\n");
    else if (a % 4 == 2)
        printf("4\n");
    else if (a % 4 == 3)
        printf("2\n");
    else if (a % 4 == 0)
        printf("6\n");
    return 0;
}