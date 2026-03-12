#include <iostream>

using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    int p = 0;
    while (n--)
    {
        int t;
        char a;
        cin >> t >> a;
        p += t;
        if (a == 'T' && p < 210)
        {
            k = k % 8 + 1;
        }
    }
    cout << k << endl;
    return 0;
}
