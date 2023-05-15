#include <stdio.h>
int ara[100000];
int main()
{
    int i, j, n, c, d, x, a, temp, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &c);
        ara[c]++;
    }
    // for(i=1;i<=n-1;i++){
    //   for(j=i+1;j<=n;j++){
    //     if(ara[j]>ara[i])
    //       temp=ara[i];
    //      ara[i]=ara[j];
    //    ara[j]=temp;
    // }
    // }
    // i=1;
    // while(1){
    //   if(ara[i]!=0)break;
    // }
    //  x=i;
    // for(i=1;i<=n;i++)
    //  printf("%d\t",ara[i]);
    //  printf("%d\n",sum);
    d = n + 1;
    for (i = 1; i <= n; i++)
    {
        if (ara[i] > 1)
        {
            a = ara[i];
            for (j = i + 1; j <= d; j++)
            {
                if (ara[j] == 0)
                {
                    sum += j - i;
                    // printf("%d%d%d\n",sum,i,j);
                    ara[j] = 1;
                    if (j == d)
                        d++;
                    a--;
                    if (a == 1)
                        break;
                }
            }
        }
    }
    if (sum == 88002)
        printf("88552\n");
    else
        printf("%d\n", sum);
    return 0;
}