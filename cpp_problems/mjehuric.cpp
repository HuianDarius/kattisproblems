#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    vector<ll> z1;
    ll t = 5;
    while(t-- > 0)
    {
        ll a;
        cin >> a;
        z1.push_back(a);
    }
    while(z1.at(0) != 1 || z1.at(1) != 2 || z1.at(2) != 3 || z1.at(3) != 4 || z1.at(4) != 5)
    {
        if(z1.at(0) > z1.at(1))
        {
            swap(z1.at(0), z1.at(1));
            for(int i = 0; i < 5; i++)
            {
                cout << z1.at(i) << " ";
            }
            cout << '\n';
        }
        if(z1.at(1) > z1.at(2))
        {
            swap(z1.at(1), z1.at(2));
            for(int i = 0; i < 5; i++)
            {
                cout << z1.at(i) << " ";
            }
            cout << '\n';
        }
        if(z1.at(2) > z1.at(3))
        {
            swap(z1.at(2), z1.at(3));
            for(int i = 0; i < 5; i++)
            {
                cout << z1.at(i) << " ";
            }
            cout << '\n';
        }
        if(z1.at(3) > z1.at(4))
        {
            swap(z1.at(3), z1.at(4));
            for(int i = 0; i < 5; i++)
            {
                cout << z1.at(i) << " ";
            }
            cout << '\n';
        }

    }
    return 0;
}