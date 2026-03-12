#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c = 1;
    cin >> n >> m;
    vector<string> d(n);
    for(int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    for(int i = 0; i < m; i++)
    {
        bool ok = true;
        for(int j = 0; j < n; j++)
        {
            if(d[j][i] != '_')
            {
                ok = false;
                break;
            }
        }
        if(ok)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}