#include <stdio.h>
int main()
{
    int a, b, c, i, j, temp;
    int z[20];
    scanf("%d%d%d", &a, &b, &c);
    z[0] = a + b * c;
    z[1] = a * (b + c);
    z[2] = a * b * c;
    z[3] = (a + b) * c;
    z[4] = a + b + c;
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (z[i] < z[j])
            {
                temp = z[i];
                z[i] = z[j];
                z[j] = temp;
            }
        }
    }
    printf("%d\n", z[0]);
    return 0;
}