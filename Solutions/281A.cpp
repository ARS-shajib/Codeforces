#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    if (s[0] >= 97 & s[0] <= 122)
    {
        s[0] = 'A' + s[0] - 'a';
    }
    printf("%s\n", s);
    return 0;
}