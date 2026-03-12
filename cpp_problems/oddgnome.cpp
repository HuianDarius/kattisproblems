#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        for(ll j = 0; j < n - 1; j++)
        {
            if(v[j] != v[j+1] - 1)
            {
                cout << j + 2 << endl;
                break;
            }
        }
    }
    return 0;
}