#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, d = 0;
    while(cin >> n >> m && n != 0 && m != 0)
    {
        vector<int> a, b, c;
        for(int i = 0; i < n; i++)
        {
            cin >> d;
            a.push_back(d);
        }
        for(int i = 0; i < m; i++)
        {
            cin >> d;
            b.push_back(d);
        }
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
        cout << c.size() << endl;
    }
    return 0;
}