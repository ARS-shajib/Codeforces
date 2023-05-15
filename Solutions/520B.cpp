#include <stdio.h>
int main()
{
    int n, m, count = 0, c;
    scanf("%d%d", &n, &m);
    if (n >= m)
        printf("%d\n", n - m);
    else
    {
        while (1)
        {
            if (n >= m)
            {
                count += n - m;
                printf("%d\n", count);
                return 0;
            }
            c = m / 2;
            if (c * 2 == m)
                m /= 2;
            else
                m++;
            count++;
        }
    }
    return 0;
}