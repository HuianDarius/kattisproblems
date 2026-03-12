#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main()
{
    ld n;
    cin >> n;
    ll res = round((n * 5280000) / 4854.0);
    cout << res << endl;
    return 0;
}