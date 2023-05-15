#include <stdio.h>
int main()
{
    int n, sum = 0, t, i;
    char s[20];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
        if (s[0] == 'T')
            sum += 4;
        else if (s[0] == 'C')
            sum += 6;
        else if (s[0] == 'O')
            sum += 8;
        else if (s[0] == 'D')
            sum += 12;
        else if (s[0] == 'I')
            sum += 20;
    }
    printf("%d\n", sum);
    return 0;
}