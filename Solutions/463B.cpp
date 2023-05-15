#include <stdio.h>
int main()
{
    int ara[100000];
    int n, i, max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &ara[i]);
    for (i = 0; i < n; i++)
    {
        if (ara[i] > max)
            max = ara[i];
    }
    printf("%d\n", max);
    return 0;
}