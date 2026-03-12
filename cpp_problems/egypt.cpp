#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while(true)
    {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
        {
            break;
        }
        if(a > b)
        {
            int d = a;
            a = b;
            b = d;
        }
        if(b > c)
        {
            int d = b;
            b = c;
            c = d;
        }
        if(c * c == a * a + b * b)
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
    return 0;
}