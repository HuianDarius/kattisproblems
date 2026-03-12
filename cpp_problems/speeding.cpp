#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d, n, t, x, y;
    cin >> t;
    n = 0;
    t = t - 1;
    cin >> x >> y >> a >> b;
    while (t > 0)
    {
        c = b - y;
        d = a - x;
        if (c / d > n)
        {
            n = c / d;
        }
        x = a;
        y = b;
        t = t - 1;
        if (t == 0)
        {
            break;
        }
        cin >> a >> b;
    }
    cout << n << endl;
    return 0;
}
