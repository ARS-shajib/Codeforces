#include <stdio.h>
int main()
{
    long long int ara1[100000];
    long long int ara2[100000];
    int a, b, n, m, i;
    scanf("%d%d", &a, &b);
    scanf("%d%d", &n, &m);
    for (i = 0; i < a; i++)
        scanf("%lld", &ara1[i]);
    for (i = 0; i < b; i++)
        scanf("%lld", &ara2[i]);
    if (ara1[n - 1] < ara2[b - m])
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}