#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h, v;
    cin >> h >> v;
    cout << static_cast<int> (h / sin(v * M_PI / 180.0)) + 1;
    return 0;
}