#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int j = 0; j < n; j++)
    {
        if(j % 2 == 0)
        {
            cout << v[j] << endl;
        }
    }
    return 0;
}