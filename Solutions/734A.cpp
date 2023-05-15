#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    int i, len, x, m = 0, n = 0;
    scanf("%d", &x);
    scanf("%s", s);
    for (i = 0; i < x; i++)
    {
        if (s[i] == 'A')
            m++;
        else
            n++;
    }
    if (m > n)
        printf("Anton\n");
    else if (n > m)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}