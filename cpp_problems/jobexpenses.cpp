#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int c = 0;
    cin >> a;
    while (a--)
    {
        cin >> b;
        if (b < 0)
        {
            c += -(b);
        }
    }
    cout << c;
    return 0;
}
