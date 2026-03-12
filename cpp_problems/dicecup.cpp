#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if(n < m)
    {
        for(int i = n; i < m + 1; i++)
        {
            cout << n + 1 << endl;
            n+= 1;
        }
    }
    else if(n > m)
    {
        for(int i = m; i < n + 1; i++)
        {
            cout << m + 1 << endl;
            m+= 1;
        }
    }
    else
    {
        cout << n + 1 << endl;
    }
    return 0;
}