#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t, n, sum = 0;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> n;
        vector<ll> v1(n);
        for(ll j = 0; j < n; j++)
        {
            cin >> v1[j];
        }
        sort(v1.begin(), v1.end());
        vector<ll> v2(n);
        for(ll j = 0; j < n; j++)
        {
            cin >> v2[j];
        }
        sort(v2.rbegin(), v2.rend());
        for(int j = 0; j < n; j++)
        {
            sum+= v1[j] * v2[j];
        }
        cout << "Case #" << i << ": " << sum << endl;
        sum = 0;
    }
    return 0;
}