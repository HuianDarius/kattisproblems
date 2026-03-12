#include <iostream>

using namespace std;

int main()
{
    {
        int t;
        cin >> t;
        for (int x = 0; x < t; x++)
        {
            long long p, k, f, i = 0;
            cin >> p >> k >> f;
            while (p <= f)
            {
                p = p * k;
                i++;
            }
            cout << i << endl;
        }
        return 0;
    }


    return 0;
}
