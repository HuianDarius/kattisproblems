#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    bool food[366];
    memset(food, 0, sizeof(food));
    int n, z = 0, si, ti;
    cin >> n;
    int mn = 400, mx = -1;
    while(n-- > 0)
    {
        cin >> si >> ti;
        mn = min(mn, si);
        mx = max(mx, ti);
        for(; si <= ti; si++)
        {
            food[si] = true;
        }
    }
    for(; mn <= mx; mn++)
    {
        if(food[mn])
        {
            z++;
        }
    }
    cout << z << endl;
    return 0;
}