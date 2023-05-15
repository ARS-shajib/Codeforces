#include <stdio.h>
int main()
{
    int l, r, a, result, ans, r1, l1;
    scanf("%d%d%d", &l, &r, &a);
    if (l == r)
    {
        l = l + (a / 2 * 2) / 2;
        l = l * 2;
        printf("%d\n", l);
        return 0;
    }
    if (l > r)
    {
        r1 = r + a;
        l1 = l;
        if (l1 > r1)
        {
            ans = r1 * 2;
        }
        else
            ans = (l + r + a) / 2 * 2;
    }
    else
    {
        l1 = l + a;
        r1 = r;
        if (l1 < r1)
        {
            ans = l1 * 2;
        }
        else
            ans = (l + r + a) / 2 * 2;
    }
    printf("%d\n", ans);
    return 0;
}