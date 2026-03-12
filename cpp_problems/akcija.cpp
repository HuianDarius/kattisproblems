#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for(int j = 0; j < n; j++)
    {
        if(j % 3 != 2)
        {
            d+= v[j];
        }
    }
    cout << d << endl;
    return 0;
}