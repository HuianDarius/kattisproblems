#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ld = long double;
int main()
{
    ld x1, x2,y1, y2, p;
    cout.precision(8);
    while(cin >> x1 && cin >> y1 && cin >> x2 && cin >> y2 && cin >> p)
    {
        ld x = pow(abs(x1 - x2), p);
        ld y = pow(abs(y1 - y2), p);
        cout << fixed << pow(x + y, (1 / p)) << endl;
    }
}