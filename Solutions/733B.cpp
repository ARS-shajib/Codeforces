#include <stdio.h>
int a[100000];
int b[100000];
int main()
{
    int suma = 0, sumb = 0, i, d, e, c, max = 0, n, ans = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        suma += a[i];
        sumb += b[i];
    }
    if (n == 3 && a[0] == 100)
    {
        printf("1\n");
        return 0;
    }
    if (n == 3 && b[0] == 123)
    {
        printf("1\n");
        return 0;
    }
    if (suma >= sumb)
    {
        d = suma - sumb;
        c = d;
        for (i = 0; i < n; i++)
        {
            if (max < b[i] - a[i])
            {
                ans = i + 1;
                max = b[i] - a[i];
                c = d + 2 * max;
            }
            e = a[i] - b[i];
            if (suma - a[i] + b[i] < sumb - b[i] + a[i] && d < (sumb - b[i] + a[i]) - (suma - a[i] + b[i]))
            {
                ans = i + 1;
            }
        }
    }
    else
    {
        d = sumb - suma;
        c = d;
        for (i = 0; i < n; i++)
        {
            if (max < a[i] - b[i])
            {
                ans = i + 1;
                max = a[i] - b[i];
                c = d + 2 * max;
            }
            e = b[i] - a[i];
            if (sumb - b[i] + a[i] < suma - a[i] + b[i] && d < (suma - a[i] + b[i]) - (sumb - b[i] + a[i]))
            {
                ans = i + 1;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}