#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char y[1001], p[1001], res[1001];
    cin >> y >> p;
    int lny = strlen(y);
    if (y[lny - 1] == 'e')
    {
        cout << y << "x" << p << endl;
    }
    else if (y[lny - 2] == 'e' && y[lny - 1] == 'x')
    {
        cout << y << p << endl;
    }
    else if (y[lny - 1] == 'a' || y[lny - 1] == 'i' || y[lny - 1] == 'o' || y[lny - 1] == 'u')
    {
        strncpy(res, y, lny - 1);
        cout << res << "ex" << p << endl;
    }
    else
    {
        cout << y << "ex" << p << endl;
    }
    return 0;
}