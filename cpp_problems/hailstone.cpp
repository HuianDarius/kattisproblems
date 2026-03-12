#include <iostream>
using namespace std;
using ll = long long;

ll hailstones(ll n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        if(n % 2 == 0)
        {
            return n + hailstones(n / 2);
        }
        else
        {
            return n + hailstones(n * 3 + 1);
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    cout << hailstones(n) << endl;
    return 0;
}