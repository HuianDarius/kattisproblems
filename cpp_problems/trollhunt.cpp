#include <iostream>

using namespace std;

int main()
{
    int b, k, g;
    cin >> b >> k >> g;
    int e = k / g;
    b = b - 1;
    int d = b / e;
    if (b % e > 0)
    {
        cout << d + 1;
    }
    else cout << d;
    return 0;
}
