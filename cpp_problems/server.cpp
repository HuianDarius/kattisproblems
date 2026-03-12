#include <iostream>

using namespace std;

int main()
{
    int n, t, a = 0, b = 0, c;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        a = a + c;
        if (a <= t)
        {
            b+= 1;
        }
        else
        {
            break;
        }
    }
    cout << b << endl;
    return 0;
}
