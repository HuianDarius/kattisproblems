#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int a2, b2;
    a2 = (a % 10) * 100 + ((a / 10) % 10) * 10 + ((a / 100) % 10);
    b2 = (b % 10) * 100 + ((b / 10) % 10) * 10 + ((b / 100) % 10);
    if (a2 < b2)
    {
        cout << b2;
    }
    else
    {
        cout << a2;
    }
    return 0;
}
