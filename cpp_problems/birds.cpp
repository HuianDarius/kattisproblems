#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll l, d, n;
    cin >> l >> d >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll rez = 0, f = 6;
    if(n == 0)
    {
        rez+= (l - 12) / d + 1;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            while(v[i] - f >= d)
            {
                f+= d;
                rez++;
            }
            f = v[i] + d;
        }
        while(f <= l - 6)
        {
            rez++;
            f+= d;
        }
    }
    cout << rez << endl;
    return 0;
}