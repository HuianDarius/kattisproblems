#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool possible = false;
        if (a + b == c)
        {
            possible = true;
        }
        if (a * b == c)
        {
            possible = true;
        }
        if (a - b == c)
        {
            possible = true;
        }
        if (b - a == c)
        {
            possible = true;
        }
        if (a % b == 0 && a / b == c)
        {
            possible = true;
        }
        if (b % a == 0 && b / a == c)
        {
            possible = true;
        }
        if (possible)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
