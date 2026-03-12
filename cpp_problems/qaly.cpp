#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double q, y, qf;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> q >> y;
        qf+= q * y;
    }
    cout << fixed << setprecision(3);
    cout << qf << endl;
    return 0;
}