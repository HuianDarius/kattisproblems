#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n = 1;
    while(cin >> x)
    {
        vector<int> v;
        int b = INT_MIN;
        int c = INT_MAX;
        while(x--)
        {
            int a;
            cin >> a;
            if(a > b)
            {
                b = a;
            }
            if(a < c)
            {
                c = a;
            }
        }
        cout << "Case " << n++ << ": " << c << " " << b << " " << b - c << endl;
    }
    return 0;
}