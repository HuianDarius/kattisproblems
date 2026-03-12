#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double t = 0;
    double c = 0;
    while (n--)
    {
        double x;
        cin >> x;
        if (x >= 0)
        {
            c++;
            t += x;
        }
    }
    cout << t / c << endl;
    return 0;
}
