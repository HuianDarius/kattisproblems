#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e;
    cin >> f;
    if (f >= a)
    {
        cout << "A" << endl;
    }
    else if (f <= a && f >= b)
    {
        cout << "B" << endl;
    }
    else if (f <= b && f >= c)
    {
        cout << "C" << endl;
    }
    else if (f <= c && f >= d)
    {
        cout << "D" << endl;
    }
    else if (f <= d && f >= e)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
    return 0;
}
