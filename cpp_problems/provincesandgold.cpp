#include <iostream>

using namespace std;

int main()
{
    int g, s, c;
    cin >> g >> s >> c;

    int a = g * 3 + s * 2 + c * 1;
    if (a >= 8)
    {
        cout << "Province or ";
    }
    else if (a >= 5)
    {
        cout << "Duchy or";
    }
    else if (a >= 2)
    {
        cout << "Estate or";
    }

    if (a >= 6)
    {
        cout << " Gold";
    }
    else if (a >= 3)
    {
        cout << " Silver";
    }
    else
    {
        cout << " Copper";
    }
    return 0;
}
