#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0;
    cin >> a;
    if (a % 10 != 0)
    {
        while (a != 0)
        {
            b = a % 10;
            c = c * 10 + b;
            a /= 10;
        }
    }
    cout << c << endl;
    return 0;
}
