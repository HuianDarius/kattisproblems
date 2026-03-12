#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll a = 1, b = 1, carry = 0;
    while(a != 0 || b != 0)
    {
        cin >> a >> b;
        if(a == 0 && b == 0)
        {
            return 0;
        }
        int k = 0;
        ll y = min(a, b), z = max(a, b);
        while(z != 0)
        {
            if(y % 10 + z % 10 + carry > 9)
            {
                k++;
                carry = 1;
                y/= 10;
                z/= 10;
            }
            else
            {
                carry = 0;
                y/= 10;
                z/= 10;
            }
        }
        if(k == 0)
        {
            cout << "No carry operation." << endl;
            k = 0;
            carry = 0;
        }
        else if(k == 1)
        {
            cout << 1 << " carry operation." << endl;
            k = 0;
            carry = 0;
        }
        else
        {
            cout << k << " carry operations." << endl;
            k= 0;
            carry = 0;
        }
    }
    return 0;
}