#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c, n, k, kmn, kmx;
    cin >> n >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> c;
        a+= c;
    }
    if(n != k)
    {
        kmn = ((n - k) * -3 + a) / n;
        kmx = ((n - k) * 3 + a) / n;
    }
    else
    {
        b = a / n;
        kmn = b;
        kmx = b;
    }
    cout << fixed;
    cout << setprecision(4);
    cout << kmn << " " << kmx << endl;
    return 0;
}