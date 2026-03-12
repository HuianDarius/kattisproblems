#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 0, b = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for(int j = 0; j < n; j++)
    {
        if(j % 2 == 0)
        {
            a+= v[j];
        }
        else
        {
            b+= v[j];
        }
    }
    cout << a << " " << b << endl;
    return 0;
}