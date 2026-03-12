#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y == 2018)
    {
        cout << "yes" << endl;
    }
    else if (((y - 2017) * 12 - 4) % 26 < 12)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
