#include <stdio.h>
int main()
{
    int n, m, i, j;
    char s[10];
    scanf("%d", &n);
    m = n + 1;
    n++;
    while (1)
    {
        for (i = 0; i < 4; i++)
        {
            s[i] = n % 10;
            n = n / 10;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (s[i] == s[j])
                {
                    n = m + 1;
                    // printf("%d\t",n);
                    break;
                }
            }
            if (n == m + 1)
                break;
        }
        if (n != m + 1)
            break;
        else
            m++;
    }
    printf("%d\n", m);
    return 0;
}