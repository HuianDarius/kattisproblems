#include <iostream>

using namespace std;

int main()
{
    int n, t, a = 0;
    cin >> n;
    while (n > 0)
    {
        cin >> t;
        if (t < 0)
        {
            a+= 1;
        }
        n--;
    }
    cout << a << endl;
    return 0;
}
