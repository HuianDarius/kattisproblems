#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using d6 = long double;
int main()
{
    i64 n,m;
    cin >> m >> n;
    char a[m][n];
    for(i64 i = 0; i < m; i++)
    {
        for(i64 j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(i64 j = 0; j < n; j++)
    {
        i64 s = 0;
        for(i64 i = m - 1; i >= 0; i--)
        {
            if(a[i][j] == '.')
            {
                s++;
            }
            else if(a[i][j] == '#')
            {
                s = 0;
            }
            else if(s > 0)
            {
                a[i][j] = '.';
                a[i + s][j] = 'a';
            }
        }
    }

    for(i64 i = 0; i < m; i++)
    {
        for(i64 j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}