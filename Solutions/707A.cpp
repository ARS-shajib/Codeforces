#include <stdio.h>
int main()
{
    int a, b, c = 0, i, j;
    char ch;
    scanf("%d%d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf(" %c", &ch);
            if (ch == 'C' || ch == 'M' || ch == 'Y')
                c = 1;
        }
    }
    if (c == 1)
        printf("#Color\n");
    else
        printf("#Black&White\n");
    return 0;
}