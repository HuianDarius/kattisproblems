#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d = 0;
    cin >> a >> b >> c;
    d = max(b - a, c - b);
    cout << d - 1 << endl;
    return 0;
}