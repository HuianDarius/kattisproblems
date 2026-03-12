#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ll n, m, a = 0;
    cin >> n;
    cin >> m;
    while(m % n != 0)
    {
        m++;
        a++;
    }
    for(ll i = 0; i < (n - a); i++)
    {
        for(ll j = 0; j < (m / n); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    while(a > 0)
    {
        for(ll i = 0; i < (m - 1) / n; i++)
        {
            cout << "*";
        }
        a--;
        cout << endl;
    }
    return 0;
}