#include <stdio.h>
char s[100000000];
int main()
{
    long long int n, b, a = 0, c, i, count = 0;
    scanf("%s", s);
    c = strlen(s);
    for (i = 0; i < c; i++)
    {
        if (s[i] == '7' || s[i] == '4')
            count++;
    }
    if (count == 4 || count == 7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}