#include <stdio.h>
int main()
{
    int a, b, i, j;
    scanf("%d%d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (i % 2 == 0)
                printf("#");
            else if (j < b - 1 && i % 4 == 1)
                printf(".");
            else if (i % 4 == 3 && j > 0)
                printf(".");
            else if (i % 4 == 1 && j == b - 1)
                printf("#");
            else if (i % 4 == 3 && j == 0)
                printf("#");
        }
        printf("\n");
    }
    return 0;
}