#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a, b, c;
    long x = 0;
    cin >> n;
    while(n--)
    {
        cin >> c;
        a = c / 10;
        b = c % 10;
        x+= pow(a, b);
    }
    cout << x << endl;
    return 0;
}