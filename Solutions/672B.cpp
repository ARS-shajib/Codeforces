#include <stdio.h>
int ara[200];
int main()
{
    char s[100001];
    int i, j, sum = 0, a;
    scanf("%d", &a);
    scanf("%s", s);
    for (i = 0; i < a; i++)
    {
        ara[s[i] - 97]++;
    }
    for (i = 0; i < 30; i++)
    {
        if (ara[i] > 1)
            sum += ara[i] - 1;
    }
    if (sum > 25 || a > 26)
        printf("-1\n");
    else
        printf("%d\n", sum);
    return 0;
}