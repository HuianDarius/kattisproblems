#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin >> p;
    for(int z = 0; z < p; z++)
    {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int s = 0;
        int s1 = 0;
        int s2 = 0;
        for(int i = 1; i <= e / a && s < 2; i++)
        {
            if((e - (i * a)) % c == 0)
            {
                int t2 = (e - (i * a)) / c;
                if(i * b + t2 * d == f && t2 >= 1)
                {
                    s1 = i;
                    s2 = t2;
                    s++;
                }
            }
        }
        if(s != 1)
        {
            cout << "?" << endl;
        }
        else
        {
            cout << s1 << " " << s2 << endl;
        }
    }
    return 0;
}