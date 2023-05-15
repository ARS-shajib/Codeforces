#include <stdio.h>
int main()
{
    int a, b, ans, i;
    scanf("%d%d", &a, &b);
    for (i = 0;;)
    {
        a *= 3;
        b *= 2;
        i++;
        if (a > b)
        {
            printf("%d\n", i);
            return 0;
        }
    }
}