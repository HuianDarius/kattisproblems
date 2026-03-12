#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll c, l, n;
    cin >> c;
    while(c--)
    {
        cin >> l >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll low = min(v[0], l - v[0]);
        ll high = max(v[0], l - v[0]);
        for(ll i = 0; i < n; i++)
        {
            low = max(low, min(v[i], l - v[i]));
            high = max(high, max(v[i], l - v[i]));
        }
        cout << low << " " << high << endl;
    }
    return 0;
}