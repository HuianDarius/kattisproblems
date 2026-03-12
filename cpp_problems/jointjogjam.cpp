#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    double a, b;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
    if(a > b)
    {
        cout.precision(10);
        cout << fixed;
        cout << a << endl;
    }
    else
    {
        cout.precision(10);
        cout << fixed;
        cout << b << endl;
    }
    return 0;
}