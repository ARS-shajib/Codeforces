#include <stdio.h>
#include <math.h>
long long int ara[1000002];
long long int ara1[1000002];
int main()
{
    long long int a, count = 0, i, j, k = 0, c, b = 1;
    long long int n;
    for (i = 2; i * i <= 1000000; i++)
    {
        if (ara[i] == 1)
            continue;
        for (j = i * i; j <= 1000000; j += i)
            ara[j] = 1;
    }
    for (i = 2, k = 0; i <= 1000000; i++)
    {
        if (ara[i] == 0)
        {
            ara1[k] = i;
            k++;
            // printf("%lld\t",ara1[k-1]);
        }
    }
    scanf("%lld", &a);
    for (i = 0; i < a; i++)
    {
        count = 0;
        scanf("%lld", &n);
        if (n <= 1000000 && ara[n] == 0)
        {
            printf("NO\n");
            continue;
        }
        c = sqrt(n);
        if (c * c == n && n / c == c && (n == 4 || n % 2 != 0))
        {
            //   for(j=0;ara1[j]<c;j++){
            //      if(n%ara1[j]==0){
            if (ara[c] == 0)
                printf("YES\n");
            else
                printf("NO\n");
            //           printf("NO\n");
            //            count==1;
            //         break;
            //    }
            //    if(j==k-1)
            //        break;
            // if(count!=1)
            // printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}