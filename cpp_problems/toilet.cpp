#include <iostream>

using namespace std;

int main()
{
    int a3 = 0, a2 = 0, a1 = 0;
    int k = 0;
    char x, c;
    cin >> x;
    c = x;
    while (cin >> x)
    {
        if (k == 0)
        {
            if (c == 'U')
            {
                if (x == 'U')
                {
                    a1 += 0;
                    a2 += 1;
                    a3 += 0;
                }
                if (x == 'D')
                {
                    a1 += 2;
                    a2 += 1;
                    a3 += 1;
                }
            }
            if (c == 'D')
            {
                if (x == 'U')
                {
                    a1 += 1;
                    a2 += 2;
                    a3 += 1;
                }
                if (x == 'D')
                {
                    a1 += 1;
                    a2 += 0;
                    a3 += 0;
                }
            }
        }
        else
        {
            if (c == 'U')
            {
                if (x == 'U')
                {
                    a1 += 0;
                    a2 += 2;
                    a3 += 0;
                }
                if (x == 'D')
                {
                    a1 += 2;
                    a2 += 0;
                    a3 += 1;
                }
            }
            if (c == 'D')
            {
                if (x == 'U')
                {
                    a1 += 0;
                    a2 += 2;
                    a3 += 1;
                }
                if (x == 'D')
                {
                    a1 += 2;
                    a2 += 0;
                    a3 += 0;
                }
            }
        }
        c = x;
        k++;
    }
    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    return 0;
}
