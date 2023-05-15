#include <stdio.h>
int main()
{
    int i, a, b, n, ans;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b);
        n = 3;
        while (1)
        {
            ans = ((n - 2) * 180) / n;
            if (ans == b && ((n - 2) * 180) % n == 0)
            {
                printf("YES\n");
                break;
            }
            else if (ans > b)
            {
                printf("NO\n");
                break;
            }
            n++;
        }
    }
}