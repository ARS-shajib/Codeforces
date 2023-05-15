#include <stdio.h>
int main()
{
    int a, count1 = 0, count = 0, temp, i;
    char s[200001];
    scanf("%d", &a);
    scanf("%s", s);
    for (i = 0; i < a; i++)
    {
        if (s[i] == '0')
            count++;
        else
            count1++;
    }
    if (count1 > count)
    {
        temp = count;
        count = count1;
        count1 = temp;
    }
    printf("%d\n", a - 2 * count1);
    return 0;
}