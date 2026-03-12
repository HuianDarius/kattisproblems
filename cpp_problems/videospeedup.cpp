#include <iostream>

using namespace std;

int main()
{
    int n, p, k, a, pp = 0;
    double total = 0;
    cin >> n >> p >> k;
    int i = 0;
    while (i < n)
    {
        cin >> a;
        total += ((a - pp) * (100 + p * i)) / 100.0;
        pp = a;
        i++;
    }
    total += ((k - pp) * (100 + p * i)) / 100.0;
    cout.precision(8);
    cout << fixed;
    cout << total << endl;
    return 0;
}