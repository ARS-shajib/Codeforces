#include <stdio.h>
int main()
{
    char ara[1000000];
    int i, len;
    scanf("%s", ara);
    len = strlen(ara);
    printf("%s", ara);
    for (i = len - 1; i >= 0; i--)
        printf("%c", ara[i]);
    return 0;
}