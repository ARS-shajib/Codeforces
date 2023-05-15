#include <stdio.h>
int main()
{
    int t, i, a, b, m = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);
        if (a != b)
        {
            m = 1;
        }
    }
    if (m == 1)
    {
        printf("Happy Alex\n");
    }
    else
    {
        printf("Poor Alex\n");
    }
    return 0;
}