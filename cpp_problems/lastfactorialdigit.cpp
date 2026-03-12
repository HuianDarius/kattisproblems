#include <iostream>

using ll = long long;

using namespace std;

int fact(int n)
{
    if (n < 2) return 1;
    return n % 10 * fact(n - 1) % 10;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        cout << (a >= 5 ? 0 : fact(a)) << endl;
    }
    return 0;
}
