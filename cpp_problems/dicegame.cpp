#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, b1, b2;
    int x1, y1, x2, y2;
    cin >> a1 >> b1 >> a2 >> b2;
    cin >> x1 >> y1 >> x2 >> y2;
    int g = 0, e = 0;
    g+= (b1 + a1) + (b2 + a2);
    e+= (x1 + y1) + (x2 + y2);
    if(g > e)
    {
        cout << "Gunnar" << endl;
    }
    else if(e > g)
    {
        cout << "Emma" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
    return 0;
}