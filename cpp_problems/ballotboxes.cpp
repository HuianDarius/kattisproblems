#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    while(true)
    {
        cin >> n >> b;
        if(n == -1)
        {
            break;
        }
        vector<int> v(n);
        int l = 1, r = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            r = max(r, v[i]);
        }
        int sol = r;
        while(l <= r)
        {
            int m = l + (r - l) / 2;
            int d = 0;
            for(int i = 0; i < n; i++)
            {
                d+= v[i] / m;
                if(v[i] % m != 0)
                {
                    d++;
                }
            }
            if(d > b)
            {
                l = m + 1;
            }
            else
            {
                sol = m;
                r = m - 1;
            }
        }
        cout << sol << endl;
    }
    return 0;
}