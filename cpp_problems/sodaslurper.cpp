#include <iostream>

using namespace std;

int main()
{
    int e, f, c, a = 0, b = 0;
    cin >> e >> f >> c;
    a = e + f;
    while (a >= c)
    {
        a-= c;
        b+= 1;
        a+= 1;
    }
    cout << b << endl;
    return 0;
}
