#include <stdio.h>
int ara[100];
int main()
{
    char s[200];
    int n, i, j, m, k;
    char temp;
    scanf("%d", &n);
    scanf("%s", s);
    // a=sqrt(n);
    for (i = 2, j = 0; i <= n; i++)
    {
        if (n % i == 0)
        {
            ara[j] = i;
            j++;
        }
    }
    for (i = 0; i < j; i++)
    {
        for (k = 0, m = ara[i] - 1; k < ara[i] / 2; k++, m--)
        {
            temp = s[k];
            s[k] = s[m];
            s[m] = temp;
        }
    }
    printf("%s\n", s);
    return 0;
}