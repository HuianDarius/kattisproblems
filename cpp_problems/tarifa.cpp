#include <iostream>

using namespace std;

int main()
{
    int x, n, p, s;
    s = 0;
    cin >> x >> n;
    while (n--)
    {
        cin >> p;
        s += x - p;
    }
    cout << s + x << endl;
    return 0;
}
