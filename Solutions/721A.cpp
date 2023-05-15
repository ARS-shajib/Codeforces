#include <stdio.h>
int main()
{
    int n, i, a = 0, c = 0, count = 0;
    int ara[100];
    char s[101];
    scanf("%d", &n);
    scanf("%s", s);
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            count++;
        else
            count = 0;
        if (count == 1)
        {
            a++;
        }
        if ((s[i] == 'B' && s[i + 1] == 'W') || (s[i] == 'B' && i == n - 1))
        {
            ara[c] = count;
            c++;
        }
    }
    printf("%d\n", a);
    for (i = 0; i < a; i++)
        printf("%d ", ara[i]);
    printf("\n");
    return 0;
}