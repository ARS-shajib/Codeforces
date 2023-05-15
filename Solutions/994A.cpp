#include <stdio.h>
int main()
{
    int n, m, i, j;
    int ara[10];
    int ara1[10];
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &ara[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &ara1[i]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (ara[i] == ara1[j])
            {
                printf("%d ", ara[i]);
                break;
            }
        }
    }
    return 0;
}