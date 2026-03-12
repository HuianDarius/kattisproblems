#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(100001);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < q; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;
        if(t == 1)
        {
            v[x - 1] = y;
        }
        else
        {
            cout << abs(v[x - 1] - v[y - 1]) << endl;
        }
    }
    return 0;
}
