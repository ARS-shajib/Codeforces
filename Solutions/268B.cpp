#include <stdio.h>
int main()
{
    int sum = 0, n, i, j;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1\n");
        return 0;
    }
    sum += n;
    for (i = 2, j = n - 2; i < n; i++, j--)
    {
        sum += j * i + 1;
    }
    printf("%d\n", sum + 1);
    return 0;
}