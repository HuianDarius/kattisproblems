#include <iostream>

using namespace std;

int main()
{
    int l, d, x, i;
    int n = 10000, m = 0;
    int sum = 0;
    cin >> l >> d >> x;
    for (i = l; i <= d; i++)
    {
        sum = 0;
        int y = i;
        while (y != 0)
        {
            sum += y % 10;
            y /= 10;
        }
        if (sum == x)
        {
            n = min(n, i);
            m = max(m, i);
        }
    }
    cout << n << endl;
    cout << m << endl;
    return 0;
}
