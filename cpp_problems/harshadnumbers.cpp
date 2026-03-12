#include <iostream>
using namespace std;
using ll = long long;
bool checker(ll n)
{
    ll x = 0, a = n;
    while (a)
    {
        x+= a % 10;
        a/= 10;
    }
    if(n % x == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ll n;
    cin >> n;
    while(!checker(n))
    {
        n++;
    }
    cout << n << endl;
    return 0;
}