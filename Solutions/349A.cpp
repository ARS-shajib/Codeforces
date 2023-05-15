#include <stdio.h>
int main()
{
    int n, count = 0, i, m, count1 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (count >= 0)
        {
            if (m == 25)
                count++;
            else if (m == 50)
            {
                count1++;
                count--;
            }
            else if (m == 100)
            {
                if (count1 > 0)
                {
                    count1--;
                    count--;
                }
                else
                    count -= 3;
            }
        }
    }
    if (count < 0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}