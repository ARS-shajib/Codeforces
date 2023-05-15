#include <stdio.h>
int main()
{
    int ara[100];
    int a[100];
    int i, t, n, j, count = 0;
    scanf("%d%d", &n, &t);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
        for (j = i - 1; j >= 0; j--)
        {
            if (ara[i] == ara[j])
                break;
        }
        if (j == -1)
        {
            a[count] = i + 1;
            count++;
        }
    }
    if (count >= t)
    {
        printf("YES\n");
        for (i = 0; i < t; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    else
        printf("NO\n");
    return 0;
}