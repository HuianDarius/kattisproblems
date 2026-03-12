#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t, n, s = 0;
    cin >> t;
    while(t > 0)
    {
        cin >> n;
        vector<ll> v(3 * n);
        for(ll i = 0; i < 3 * n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for(ll i = 1; i < n * 2; i+= 2)
        {
            s+= v[i];
        }
        cout << s << endl;
        s = 0;
        t--;
    }
    return 0;
}