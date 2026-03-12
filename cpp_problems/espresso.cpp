#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, s, a = 0, ss;
    cin >> n >> s;
    ss = s;
    vector<string> z1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> z1.at(i);
    }
    for (int i = 0; i < n - 1; i++)
    {
        ll b = 0;
        ss -= (z1.at(i).at(0) - '0') + (z1.at(i).size() == 2);
        if ((z1.at(i + 1).at(0) - '0') + (z1.at(i+1).size() == 2) > ss)
        {
            ss = s;
            a += 1;
        }
    }
    cout << a << endl;
    return 0;
}