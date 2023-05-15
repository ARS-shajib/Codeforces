#include <stdio.h>
#include <string.h>
int ara[27];
int main()
{
    int max = 0, sum = 0, i, a, j, k;
    char s[10001];
    scanf("%s", s);
    scanf("%d", &k);
    for (i = 0; i < 26; i++)
    {
        scanf("%d", &ara[i]);
        if (ara[i] > max)
            max = ara[i];
    }
    a = strlen(s);
    for (i = 1; i <= a; i++)
    {
        sum += ara[s[i - 1] - 'a'] * i;
        // printf("%d\t",sum);
    }
    for (j = 0; j < k; j++)
    {
        sum += i * max;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}