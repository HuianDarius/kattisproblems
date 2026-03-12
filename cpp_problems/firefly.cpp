#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, x;
    cin >> n >> h;
    vector<int> a(h, 0);
    vector<int> b(h, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if (i % 2 == 0)
        {
            a[x - 1]++;
        }
        else
        {
            b[h - x]++;
        }
    }

    int count = 0;
    for(int i = h - 1; i >= 0; i--)
    {
        count+= a[i];
        a[i] = count;
    }

    count = 0;
    for(int i = 0; i < h; i++)
    {
        count+= b[i];
        b[i] = count;
    }

    int o = 1000000000;
    int l = 0;
    for(int i = 0; i < h; i++)
    {
        if (o > a[i] + b[i])
        {
            o = a[i] + b[i];
            l = 1;
        }
        else if (o == a[i] + b[i])
            l++;
    }

    cout << o << " " << l;
    return 0;
}