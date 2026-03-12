#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, d, r;
bool v[100];
vector<ll> vr;

ll solve(ll a)
{
    ll res = d;
    if(a >= vr.size())
    {
        return d;
    }
    if(!v[vr[a]])
    {
        v[vr[a]] = true;
        res = min(solve(a + 1) - 1, res);
    }
    else
    {
        ll c = 0;
        if(vr[a] + 1 <= n && !v[vr[a] + 1])
        {
            v[vr[a] + 1] = true;
            res = min(solve(a + 1) - 1, res);
            v[vr[a] + 1] = false;
            c++;
        }
        if(vr[a] - 1 >= 0 && !v[vr[a] - 1])
        {
            v[vr[a] - 1] = true;
            res = min(solve(a + 1) - 1, res);
            v[vr[a] - 1] = false;
            c++;
        }
        if(!c)
        {
            res = min(solve(a + 1), res);
        }
    }
    return res;
}

int main()
{
    cin >> n >> d >> r;
    ll x;
    for(ll i = 0; i <= n; i++)
    {
        v[i] = true;
    }
    for(ll i = 0; i < d; i++)
    {
        cin >> x;
        v[x] = false;
    }
    for(ll i = 0; i < r; i++)
    {
        cin >> x;
        vr.push_back(x);
    }
    cout << solve(0) << endl;
    return 0;
}