#include <iostream>
using namespace std;
int main()
{
    int h1, m1, h2, m2;
    char c;
    cin >> h1 >> c >> m1 >> h2 >> c >> m2;
    int ph1, pm1, ph2, pm2;
    cin >> ph1 >> c >> pm1 >> ph2 >> c >> pm2;
    int t1 = h1 * 60 + m1;
    int p1 = ph1 * 60 + pm1;
    int t2 = h2 * 60 + m2;
    int p2 = ph2 * 60 + pm2;
    int t1o = t1;
    int r = -1;
    for(int p = 1; p < 2881; p++)
    {
        t1+= p1;
        if(t1 > t2 && (t1 - t2) % p2 == 0)
        {
            r = (t1 - t2) / p2;
            break;
        }
    }
    const string week_days[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    if(r == -1)
    {
        cout << "Never" << endl;
    }
    else
    {
        int days = ((t2 + r * p2) / (60 * 24)) % 7;
        int time = (t2 + r * p2) % (60 * 24);
        int h =(time / 60) % 24;
        int m = time % 60;
        cout << week_days[days] << endl;
        if(h < 10)
        {
            cout << 0;
        }
        cout << h << ":";
        if(m < 10)
        {
            cout << 0;
        }
        cout << m << endl;
    }
    return 0;
}