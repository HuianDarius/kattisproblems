#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const int mxn = 100005;
const ll inf = 1LL << 60;
ll a[mxn];
ll mnn[mxn];
ll mxx[mxn];
int main()
{
    int n, b = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mxx[0] = -inf;
    for(int i = 1; i < n; i++)
    {
        mxx[i] = max(mxx[i - 1], a[i - 1]);
    }
    mnn[n - 1] = inf;
    for(int i = n - 2; i >= 0; i--)
    {
        mnn[i] = min(mnn[i + 1], a[i + 1]);
    }
    for(int i = 0; i < n; i++)
    {
        if(mxx[i] < a[i] && a[i] < mnn[i])
        {
            b++;
        }
    }
    cout << b << endl;
    return 0;
}