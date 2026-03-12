#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ld = long double;
int main()
{
    ld n, a, b;
    cin >> n >> a >> b;
    while(n != 0 || a != 0 || b != 0)
    {
        ld res = (b * n * n * 4) / a;
        cout.precision(10);
        cout << n * n * M_PI << " " << res << endl;
        cin >> n >> a >> b;
    }
    return 0;
}