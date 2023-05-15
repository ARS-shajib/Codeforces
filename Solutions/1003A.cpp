#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, a[101], cnt = 1, mx = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            cnt++;

        else
        {
            if (mx < cnt)
                mx = cnt;
            cnt = 1;
        }
    }
    if (mx < cnt)
        mx = cnt;
    cout << mx << endl;
}