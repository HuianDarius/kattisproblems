#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll digit_sum(ll x)
{
    ll res = 0;
    while(x > 0)
    {
        res+= x % 10;
        x/= 10;
    }
    return res;
}
ll total_sum(ll x)
{
    ll d = x % 10;
    return x == 0 ? 0 : d * (d - 1) / 2 + d * digit_sum(x / 10) + 10 * total_sum(x / 10) + (x / 10) * 45;
}
int main()
{
    ll runs;
    cin >> runs;
    while(runs--)
    {
        ll lo, hi;
        cin >> lo >> hi;
        cout << total_sum(hi + 1) - total_sum(lo) << endl;
    }

    return 0;
}