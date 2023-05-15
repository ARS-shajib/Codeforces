#include <stdio.h>
int a[1001];
int main()
{
    int i, b, j, temp;
    scanf("%d", &b);
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < b - 1; i++)
    {
        for (j = i + 1; j < b; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if (b % 2 != 0)
        printf("%d\n", a[b / 2]);
    else
        printf("%d\n", a[b / 2 - 1]);
    return 0;
}