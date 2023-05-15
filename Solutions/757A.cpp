#include <stdio.h>
#include <string.h>
int main()
{
    int ara[10];
    char s[1000001];
    int min = 100000, i;
    scanf(" %[^\n]", s);
    for (i = 0; i < 7; i++)
        ara[i] = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'B')
            ara[6]++;
        else if (s[i] == 'a')
            ara[0]++;
        else if (s[i] == 'u')
            ara[1]++;
        else if (s[i] == 'l')
            ara[2]++;
        else if (s[i] == 's')
            ara[3]++;
        else if (s[i] == 'b')
            ara[4]++;
        else if (s[i] == 'r')
            ara[5]++;
    }
    ara[0] /= 2;
    ara[1] /= 2;
    for (i = 0; i < 7; i++)
    {
        if (min > ara[i])
            min = ara[i];
    }
    printf("%d\n", min);
    return 0;
}