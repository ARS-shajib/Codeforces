#include <stdio.h>
int main()
{
    int t, i;
    int ara[6];
    char a[100];
    for (i = 0; i < 6; i++)
        ara[i] = 1;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", a);
        if (a[0] == 'p')
            ara[0] = 0;
        else if (a[0] == 'g')
            ara[1] = 0;
        else if (a[0] == 'b')
            ara[2] = 0;
        else if (a[0] == 'o')
            ara[3] = 0;
        else if (a[0] == 'r')
            ara[4] = 0;
        else if (a[0] == 'y')
            ara[5] = 0;
    }
    printf("%d\n", ara[0] + ara[1] + ara[2] + ara[3] + ara[4] + ara[5]);
    if (ara[0] != 0)
        printf("Power\n");
    if (ara[1] != 0)
        printf("Time\n");
    if (ara[2] != 0)
        printf("Space\n");
    if (ara[3] != 0)
        printf("Soul\n");
    if (ara[4] != 0)
        printf("Reality\n");
    if (ara[5] != 0)
        printf("Mind\n");
    return 0;
}