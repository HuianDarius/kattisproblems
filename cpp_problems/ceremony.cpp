#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int s = n;
    for(int i = 0; i < n; i++)
    {
        if(i < n - 1)
        {
            s = min(i + 1 + v[i + 1], s);
        }
        else
        {
            s = min(i + 1, s);
        }
    }
    cout << s << endl;
    return 0;
}