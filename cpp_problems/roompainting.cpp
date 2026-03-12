#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m, n;
    cin >> n >> m;
    long long p[n];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);
    long long res = 0;
    for(int i = 0; i < m; i++)
    {
        long long q;
        cin >> q;
        long long ans = 1e9;
        long long l = 0;
        long long r = n - 1;
        while (l <= r)
        {
            long long mid = (r + l) / 2;
            if (p[mid] == q)
            {
                ans = q;
                break;
            }
            if (p[mid] < q)
            {
                l = mid + 1;
            }
            else
            {
                ans = min(ans, p[mid]);
                r = mid - 1;
            }
        }
        res+= ans - q;
    }
    cout << res << endl;
    return 0;
}