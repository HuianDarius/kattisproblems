#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> c;
    c.resize(1000001, 0);
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if(c[t] == 0)
        {
            c[t - 1]++;
        }
        else
        {
            c[t - 1]++;
            c[t]--;
        }
    }
    int throws = 0;
    for(int i = 0; i < 1000000; i++)
    {
        throws+= c[i];
    }
    cout << throws << endl;
    return 0;
}