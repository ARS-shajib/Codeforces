#include <stdio.h>
int main()
{
    long long int ara[100000];
    int count = 1, max = 1, i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &ara[i]);
        if (ara[i - 1] <= ara[i])
        {
            count++;
            if (max < count)
                max = count;
        }
        else
            count = 1;
    }
    printf("%d\n", max);
    return 0;
}