#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll m;
    cin >> m;
    for(ll i = 0; i < m; i++)
    {
        bool ok1 = true;
        string s;
        cin >> s;
        int n;
        cin >> n;
        deque<ll> v(n);
        char x;
        cin >> x;
        for(ll j = 0; j < n; j++)
        {
            cin >> v[j] >> x;
        }
        if(n == 0)
        {
            cin >> x;
        }
        bool ok2 = true;
        for(ll j = 0; j < s.size(); j++)
        {
            if(s[j] == 'R')
            {
                ok1 = !ok1;
            }
            else if(s[j] == 'D')
            {
                if(v.size() > 0)
                {
                    if(ok1)
                    {
                        v.pop_front();
                    }
                    else
                    {
                        v.pop_back();
                    }
                }
                else
                {
                    cout << "error" << endl;
                    ok2 = false;
                    break;
                }
            }
        }
        if(ok2)
        {
            if(!ok1)
            {
                reverse(v.begin(), v.end());
            }
            cout << "[";
            if(!v.empty())
            {
                cout << v[0];
            }
            for(int i = 1; i < v.size(); i++)
            {
                cout << "," << v[i];
            }
            cout << "]" << endl;
        }
    }
    return 0;
}
