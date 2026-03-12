#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, discount = 0;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for(int i = 2; i < n; i+=3)
    {
        discount+= v[i];
    }
    cout << discount << endl;
    return 0;
}