#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ll n, l, w;
    while(cin >> n >> l >> w)
    {
        vector<pair<double,double>> v;
        for(ll i = 0; i < n; i++)
        {
            ll p, r;
            cin >> p >> r;
            if (r * 2 < w)
            {
                continue;
            }
            ld dia = sqrt(r * r - (w / 2.0) * (w / 2.0));
            v.emplace_back(p - dia, p + dia);
        }

        sort(v.begin(), v.end(), [](pair<double,double>& p1, pair<double, double>& p2)
        {
            if (p1.first == p2.first)
            {
                return p1.second > p2.second;
            }
            return p1.first < p2.first;
        });

        double covered = 0.0;
        ll ans = 0;
        ld EPS = 1 / 1000000.0;

        for(ll i = 0; i < n; i++)
        {
            if(v[i].second < covered + EPS)
            {
                continue;
            }
            if (v[i].first < covered + EPS)
            {
                double max_r = -1.0;
                ll nxid;
                for(ll j = i; (j < n) && (v[j].first < covered + EPS); j++)
                    if (v[j].second > max_r)
                    {
                        max_r = v[j].second;
                        nxid = j;
                    }
                ans++;
                covered = max_r;
                i = nxid;
                if (covered > l)
                {
                    break;
                }
            }
            else
            {
                ans = -1;
                break;
            }
        }

        if (covered < l)
        {
            ans = -1;
        }
        cout << ans << endl;
    }
    return 0;
}