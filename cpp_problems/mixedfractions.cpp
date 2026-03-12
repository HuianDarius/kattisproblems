#include <iostream>
using namespace std;
#define ll long long

ll func(ll a, ll b)
{
    if(a < b)
    {
        return 0;
    }
    return 1 + func(a - b , b);
}

int main()
{
    ll a, b;
    while(cin >> a >> b && a!=0 && b!=0)
    {
        cout << func(a, b) << " " << a%b << " / " << b << endl;
    }
    return 0;
}