#include <stdio.h>
int main()
{
    int a, i, count = 0, count1 = 0;
    int ara[100];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &ara[i]);
        if (ara[i] % 2 == 0)
            count++;
        else
            count1++;
    }
    if (count > count1)
    {
        for (i = 0; i < a; i++)
        {
            if (ara[i] % 2 == 1)
            {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            if (ara[i] % 2 == 0)
            {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
}