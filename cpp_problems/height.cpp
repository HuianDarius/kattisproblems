#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    ll x;
    deque<ll> v;
    while(t-- > 0)
    {
        cin >> x;
        ll s = 0;
        ll a, b = 20;
        while(b-- > 0)
        {
            cin >> a;
            v.push_back(a);
        }
        while(true)
        {
            ll val = 1;
            for(int i = 0; i < 19; i++)
            {
                if(v.at(i) > v.at(i + 1))
                {
                    swap(v.at(i), v.at(i + 1));
                    val = 0;
                    s+= 1;
                }
            }
            if(val == 1)
            {
                break;
            }
        }
        cout << x << " " << s << endl;
        v.clear();
    }
    return 0;
}