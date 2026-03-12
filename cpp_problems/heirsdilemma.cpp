#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll res = 0;
void solve(ll c, ll n)
{
    if(c > n)
    {
        return;
    }
    vector<ll> d(10,0);
    ll cc = c;
    bool ok = true;
    while(cc > 0)
    {
        d[cc % 10]+= 1;
        if(cc % 10 == 0 || c % (cc % 10) != 0)
        {
            ok = false;
            break;
        }
        cc/= 10;
    }
    for(ll i = 0; i < 10 && ok; i++)
    {
        if(d[i] > 1)
        {
            ok = false;
            break;
        }
    }
    if(ok)
    {
        res+= 1;
    }
    solve(c + 1, n);
}

int main()
{
    ll l, h;
    cin >> l >> h;
    solve(l, h);
    cout << res << endl;
    return 0;
}
