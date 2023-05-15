#include <stdio.h>
int main()
{
    char a[101];
    int a1[101];
    int i, t, len, j;
    scanf("%s", a);
    len = strlen(a);
    for (i = 0, j = 0; i < len; i = i + 2, j++)
    {
        a1[j] = a[i] - '0';
    }
    len = (len + 1) / 2;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (a1[i] > a1[j])
            {
                t = a1[i];
                a1[i] = a1[j];
                a1[j] = t;
            }
        }
    }
    for (i = 0; i < len - 1; i++)
    {
        printf("%d+", a1[i]);
    }
    printf("%d\n", a1[len - 1]);
    return 0;
}