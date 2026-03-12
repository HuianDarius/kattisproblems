#include <iostream>

using namespace std;

int main()
{
    int t, n, a, b, c, d = 0, e = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        a = n;
        d = 0;
        while (n != 0)
        {
            d = n % 10 + d;
            n/= 10;
        }
        for (int j = a - 1; j >= 0; j--)
        {
            b = j;
            e = 0;
            while (b != 0)
            {
                e = b % 10 + e;
                b/= 10;
            }
            if (e + 1 == d)
            {
                c = j;
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}
