#include <stdio.h>
#include <string.h>
int main()
{
    int t, i, j, b, max = 0;
    char s[100][11];
    char a[11];
    int ara[100];
    for (i = 0; i < 100; i++)
        ara[i] = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", s[i]);
        for (j = 0; j < i; j++)
        {
            if (strcmp(s[i], s[j]) == 0)
            {
                ara[i]++;
                if (max < ara[i])
                {
                    max = ara[i];
                    b = i;
                }
            }
        }
    }
    printf("%s\n", s[b]);
    return 0;
}