#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, ar;
    cin >> a;
    ar = sqrt(a) * 4;
    cout.precision(9);
    cout << fixed;
    cout << ar << endl;
    return 0;
}
