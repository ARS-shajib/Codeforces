#include <stdio.h>
int main()
{
    int i, a, b = 0;
    scanf("%d", &a);
    for (i = 1;; i++)
    {
        b += i;
        a = a - b;
        if (a < 0)
        {
            i--;
            break;
        }
        else if (a == 0)
            break;
    }
    printf("%d\n", i);
    return 0;
}