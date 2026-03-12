#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a1(ll n1, ll n2)
{
    n1+= 40;
    n1-= n2;
    n1%= 40;
    return n1;
}
int a2(ll n1, ll n2)
{
    n2 += 40;
    n2 -= n1;
    n2 %= 40;
    return n2;
}
int main()
{
    ll n1, n2, n3, n4;
    while(cin >> n1 >> n2 >> n3 >> n4)
    {
        if(n1 == 0 && n2 == 0 && n3 == 0 && n4 == 0)
        {
            break;
        }
        ll ans = 120;
        ans+= a1(n1, n2);
        ans+= a2(n2, n3);
        ans+= a1(n3, n4);
        cout << ans * 9 << endl;
    }
    return 0;
}