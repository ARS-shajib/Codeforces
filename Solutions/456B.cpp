#include <stdio.h>
#include <string.h>
char s[100000];
int main()
{
    int n, a;
    scanf("%s", s);
    a = strlen(s);
    if (a == 1)
        n = s[0] - '0';
    else
        n = (s[a - 2] - '0') * 10 + (s[a - 1] - '0');
    if (n % 4 == 1)
        printf("0\n");
    else if (n % 4 == 2)
        printf("0\n");
    else if (n % 4 == 3)
        printf("0\n");
    else
        printf("4\n");
    return 0;
}