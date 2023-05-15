#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, a;
    scanf("%d%d", &n, &m);
    a = pow(2, n);
    printf("%d\n", m % a);
    return 0;
}