#include <stdio.h>
int main()
{
    int a, b, count = 0;
    scanf("%d%d", &a, &b);
    if (a == 1 && b == 1)
        count = 0;
    else
    {
        while (1)
        {
            if (a % 2 == 0 && a > b && a != 2)
            {
                b += a / 2 - 1;
                count += a / 2 - 1;
                a = 2;
            }
            else if (a % 2 == 0 && b % 2 == 0 && a == b && a != 2 && b != 2)
            {
                count += a / 2 - 1;
                b += a / 2 - 1;
                a = 2;
            }
            else if (a % 2 == 1 && b % 2 == 1 && a == b && a != 1 && b != 1)
            {
                count += a / 2;
                b += a / 2;
                a = 1;
            }
            else if (b % 2 == 0 && b > a && b != 2)
            {
                a += b / 2 - 1;
                count += b / 2 - 1;
                b = 2;
            }
            else if (b % 2 != 0 && b > a)
            {
                a += b / 2;
                count += b / 2;
                b = 1;
            }
            else if (a % 2 != 0 && a > b)
            {
                b += a / 2;
                count += a / 2;
                a = 1;
            }
            else if (a <= 2 && a >= b)
            {
                count++;

                break;
            }
            else if (b <= 2 && b >= a)
            {
                count++;

                break;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}