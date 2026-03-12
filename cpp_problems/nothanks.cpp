#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    vector<int> v(90001, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v[a] = 1;
    }
    int k = 0;
    int i = 1;
    while(i < 90001)
    {
        while(i < 90001 && v[i] == 0) i++;
        if (i < 90001 && v[i] == 1)
        {
            k+= i;
        }
        while (i < 90001 && v[i] == 1) i++;
    }
    cout << k;
    return 0;
}