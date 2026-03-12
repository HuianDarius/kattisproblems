#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
int main()
{
    ll n;
    cin >> n;
    vector<pll> v(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i].second;
        cin >> v[i].first;
    }
    sort(v.begin(), v.end());
    int nr = 1;
    int tmp = v[0].first;
    for(ll i = 1; i < n; i++)
    {
        if(v[i].first < tmp || v[i].second > tmp)
        {
            nr++;
            tmp = v[i].first;
        }
    }
    cout << nr << endl;
    return 0;
}