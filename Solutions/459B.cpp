#include <bits/stdc++.h>
using namespace std;
long long int ara[1000000];
int main()
{
    long long int n, i, j, temp, max = 0, min = 100000000000000000, count = 0, count1 = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> ara[i];
    for (i = 0; i < n; i++)
    {
        if (max < ara[i])
            max = ara[i];
    }
    for (i = 0; i < n; i++)
    {
        if (max == ara[i])
            count++;
    }
    for (i = 0; i < n; i++)
    {
        if (min > ara[i])
            min = ara[i];
    }
    for (i = 0; i < n; i++)
    {
        if (min == ara[i])
            count1++;
    }
    // if(count<count1)
    cout << max - min << " ";
    // else
    //   cout<<count1<<" ";
    if (max == min)
    {
        cout << (count * (count - 1)) / 2;
    }
    else
        cout << count * count1;
    return 0;
}