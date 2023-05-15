#include <stdio.h>
int main()
{
    int ara[2];
    int i, j, n, a, b;
    ara[0] = 0;
    ara[1] = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d", &a, &b);
        if (a > b)
            ara[0]++;
        if (a < b)
            ara[1]++;
    }
    if (ara[0] > ara[1])
        printf("Mishka\n");
    else if (ara[0] < ara[1])
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
    return 0;
}