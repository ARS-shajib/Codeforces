#include <stdio.h>
long long int ara[1000000];
int main()
{
    long long int i, a, j, n, temp;
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
        scanf("%lld", &ara[i]);
    for (i = 0; i < n / 2; i++)
    {
        if (i % 2 == 0)
        {
            temp = ara[i];
            ara[i] = ara[n - 1 - i];
            ara[n - 1 - i] = temp;
        }
        // for(a=0;a<n;a++)
        // printf("%lld ",ara[a]);
        // printf("\n");
    }
    // for(i=0;i<n/2;i++){
    //  temp=ara[i];
    //  ara[i]=ara[n-1-i];
    // ara[n-1-i]=temp;
    //}
    for (i = 0; i < n; i++)
        printf("%lld ", ara[i]);
    printf("\n");
    return 0;
}