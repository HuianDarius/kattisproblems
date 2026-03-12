#include <iostream>
#include <iomanip>
using ll = long long;
using namespace std;

int main()
{

    ll n, k, d, s;
    cin >> n >> k;
    cin >> d >> s;
    ll a = n * d;
    ll b = n - k;
    ll c = k * s;
    if(a - c > 100 * b)
    {
        cout << "impossible" << '\n';
    }
    else
    {
        cout << fixed << setprecision(10);
        double d = (a - c) / double(b);
        if(d >= 0 && d <= 100)
        {
            cout << d << '\n';
        }
        else
        {
            cout << "impossible" << '\n';
        }
    }
    return 0;
}
