#include <stdio.h>
int main()
{
    int s[100];
    int i, a, maal = 0, j, sum = 0;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &s[i]);
    }
    for (i = 0; i < a; i++)
    {
        if (s[i] < 0)
            break;
        sum += s[i];
    }
    for (j = i; j < a; j++)
    {
        if (s[j] < 0)
        {
            s[j] = -s[j];
        }
        maal += s[j];
    }
    sum = sum + maal;
    printf("%d\n", sum);
    return 0;
}