#include <stdio.h>
int main()
{
    char s[20000];
    char s1[20000];
    int n, a = 0, mid, i;
    scanf("%d", &n);
    scanf("%s", s);
    if (n % 2 == 1)
    {
        mid = n / 2;
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                s1[mid + a] = s[i];
                a++;
            }
            else
            {
                s1[mid - a] = s[i];
            }
        }
        s1[n] = '\0';
    }
    else
    {
        mid = n / 2 - 1;
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                s1[mid - a] = s[i];
                a++;
            }
            else
            {
                s1[mid + a] = s[i];
            }
        }
        s1[n] = '\0';
    }
    printf("%s\n", s1);
    return 0;
}