#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, m, max = -10000000, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        a = sqrt(m);
        if (a * a != m && max < m)
        {
            max = m;
        }
    }
    printf("%d\n", max);
    return 0;
}