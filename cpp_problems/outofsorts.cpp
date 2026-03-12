#include <iostream>
using namespace std;
int main()
{
    long long n, m, a, c, x0;
    cin >> n >> m >> a >> c >> x0;
    long long l = x0;
    long long v[n];
    for(int i = 0; i < n; i++)
    {
        v[i] = (l * a + c) % m;
        l = v[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        long long l = 0;
        long long r = n - 1;
        while(l <= r)
        {
            int m = (l + r) / 2;
            if(v[m] == v[i])
            {
                res++;
                break;
            }
            else
            {
                if(v[m] < v[i])
                {
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}