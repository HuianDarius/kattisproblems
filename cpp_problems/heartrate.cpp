#include <iostream>
using namespace std;
int main()
{
    int n;
    double b, p, x, y;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> b >> p;
        x = 60.0 * (b / p);
        y = 60.0 / p;
        cout << fixed;
        cout.precision(4);
        cout << x - y << " " << x << " " << x + y << endl;
    }
    return 0;
}