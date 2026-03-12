#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c, l, wi, li;
    cin >> c;
    cin >> l;
    for(int i = 0; i < l; i++)
    {
        cin >> wi >> li;
        a = wi * li;
        b+= a * c;
    }
    cout << fixed;
    cout << setprecision(8);
    cout << b << endl;
    return 0;
}