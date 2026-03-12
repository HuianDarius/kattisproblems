#include <iostream>
using namespace std;
int main ()
{
    int a, b, c, d, newa, newb, newc;
    cin >> a >> b >> c;
    newa = min(a, b);
    newa = min(newa, c);
    newc = max(a, b);
    newc = max(newc, c);
    newb = (a + b + c) - (newa + newc);
    if(newb - newa == newc - newb)
    {
        int r = newb - newa;
        d = newc + r;
    }
    else
    {
        d = (newa + newc) - newb;
    }
    cout << d << endl;
    return 0;
}