#include <iostream>
using namespace std;
#define ll long long
ll memo[1001];

ll fibo(ll idx, ll v1, ll v2, ll k, ll v[])
{
    ll crt = v1 + v2;
    if(v[crt % k] != 0)
    {
        return v[crt % k];
    }
    v[crt % k] = idx;
    return fibo(idx + 1, v2 % k, crt % k, k, v);
}

int main()
{
    ll n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        ll v[k] = {0};
        cout << fibo(2, 1, 1, k, v) << endl;
    }
    return 0;
}
