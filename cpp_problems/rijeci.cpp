#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int a = 1, b = 0;
    for (int i = 0; i < k; i++)
    {
        int c, d;
        c = b;
        d = a+b;
        a = c;
        b = d;
    }
    cout << a << " " << b << endl;
    return 0;
}
