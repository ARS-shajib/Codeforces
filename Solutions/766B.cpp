#include <bits/stdc++.h>
using namespace std;
// long long int ara[1000000];
int main()
{
    long long int n, i, j, temp;
    cin >> n;
    long long int ara[n];
    for (i = 0; i < n; i++)
        cin >> ara[i];
    // for(i=0;i<n-1;i++){
    //     for(j=i+1;j<n;j++){
    //         if(ara[i]<ara[j]){
    //            temp=ara[i];
    //            ara[i]=ara[j];
    //            ara[j]=temp;
    //        }
    //    }
    // }
    // for(i=0;i<n;i++)
    //  cout<<ara[i];
    sort(ara, ara + n);
    // for(i=0;i<n;i++)
    // cout<<ara[i];
    for (i = 2; i < n; i++)
    {
        if (ara[i] < (ara[i - 1] + ara[i - 2]))
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
 