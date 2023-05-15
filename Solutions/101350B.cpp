#include <stdio.h>
int main()
{
    int t, a, b, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);
        if (a < b)
            printf("WeWillEatYou\n");
        else
            printf("FunkyMonkeys\n");
    }
    return 0;
}