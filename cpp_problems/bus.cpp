#include <iostream>
using namespace std;
int main()
{
    int t, k, n = 0;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> k;
        for(int i = 0; i < k; i++)
        {
            n = (n * 2) + 1;
        }
        cout << n << endl;
        n = 0;
    }
    return 0;
}