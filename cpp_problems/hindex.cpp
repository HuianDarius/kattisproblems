#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    int v[n];
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v, v + n);
    ll h = 0;
    for(ll j = 0; j < n; j+= 1)
    {
        if(n - j <= v[j])
        {
            h = max(h, n - j);
        }
    }
    cout << h << endl;
    return 0;
}