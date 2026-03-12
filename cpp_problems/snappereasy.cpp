#include <iostream>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> n >> k;
        cout << "Case #" << i << ": ";
        bool switches = true;
        for(int j = 0; j < n; j++)
        {
            if(k % 2 == 0)
            {
                switches = false;
            }
            k/= 2;
        }
        if(switches)
        {
            cout << "ON" << endl;
        }
        else
        {
            cout << "OFF" << endl;
        }
    }
    return 0;
}
