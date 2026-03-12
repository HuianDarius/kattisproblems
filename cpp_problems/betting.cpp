#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout << fixed << showpoint;
    cout << setprecision(10);
    cout << 100 / a << endl;
    cout << fixed << showpoint;
    cout << setprecision(10);
    cout << 100 / (100 - a) << endl;
    return 0;
}