#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, l, r;
    cin >> l >> r;
    a = l * 2;
    b = r * 2;
    if(l != r)
    {
        if(l > r)
        {
            cout << "Odd " << a << endl;
        }
        else
        {
            cout << "Odd " << b << endl;
        }
    }
    else if(l == 0 && r == 0)
    {
        cout << "Not a moose" << endl;
    }
    else
    {
        cout << "Even " << a << endl;
    }
    return 0;
}
