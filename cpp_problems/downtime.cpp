#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> op(101001, 0);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        op[x]++;
    }
    int ans = 0;
    int crt = 0;
    for(int i = 0; i < 101001; i++)
    {
        crt+=op[i];
        if(i >= 1000)
        {
            crt-= op[i - 1000];
        }
        int ms = crt / k;
        if(crt % k != 0)
        {
            ms++;
        }
        ans = max(ans, ms);
    }
    cout << ans << endl;
    return 0;
}