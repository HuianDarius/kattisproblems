#include <iostream>
using namespace std;
using ll = long long;

ll cnt = 0;

void solve(ll l, ll n)
{
    if(l == n)
    {
        cnt++;
        return;
    }
    for(int i = 1; i <= 3; i++)
    {
        if(l + i <= n)
        {
            solve(l + i, n);
        }
    }
}

int main()
{
    ll n, l = 0;
    cin >> n;
    solve(l, n);
    cout << cnt << endl;
    return 0;
}