#include <iostream>

using namespace std;

int main()
{
    double r, c;
    cin >> r >> c;
    double a = (((r - c) * (r - c)) / (r * r)) * 100;
    cout.precision(6);
    cout << fixed;
    cout << a << endl;
    return 0;
}
