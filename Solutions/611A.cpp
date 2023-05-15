#include <stdio.h>
int main()
{
    int a;
    char s[20];
    scanf("%d", &a);
    scanf(" %[^\n]", s);
    if (s[3] == 'w')
    {
        if (a < 5 || a == 7)
            printf("52\n");
        else
            printf("53\n");
    }
    else
    {
        if (a <= 29)
            printf("12\n");
        else if (a == 31)
            printf("7\n");
        else
            printf("11\n");
    }
    return 0;
}