#include <iostream>

using namespace std;

int main()
{
    double p, k, s;
    cin >> p >> k >> s;
    double x = p;
    double y = k;
    while (p != k)
    {
        if (p > k)
        {
            p = p - k;
        }
        else
        {
            k = k - p;
        }
    }
    double z = p;
    if (x / z * y <= s)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
