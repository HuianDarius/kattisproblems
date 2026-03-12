#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, ms = 0, ss = 0;
    cin >> n;
    while (n-- > 0)
    {
        int m, s;
        cin >> m >> s;
        ms+= m;
        ss+= s;
    }
    double s1m = ss / 60.0 / ms;
    if (s1m <= 1.0)
    {
        cout << "measurement error" << endl;
    }
    else
    {
        cout << fixed << setprecision(9) << s1m << endl;
    }
    return 0;
}
