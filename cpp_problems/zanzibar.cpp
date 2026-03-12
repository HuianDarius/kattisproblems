#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int a = 0; a < t; a++)
    {
        int b = 0, c = -1, x;
        cin >> x;
        while (x != 0)
        {
            if (c != -1)
            {
                if (x > c * 2)
                {
                    b += x - c * 2;
                }
            }
            c = x;
            cin >> x;
        }
        cout << b << endl;
    }
    return 0;
}
