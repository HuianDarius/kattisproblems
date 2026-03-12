#include <iostream>
using namespace std;
int main()
{
    int g, t, n, w, a = 0;
    cin >> g >> t >> n;
    int fw = g - t;
    for(int i = 0; i < n; i++)
    {
        cin >> w;
        a+= w;
    }
    cout << (0.9 * fw) - a << endl;
    return 0;
}