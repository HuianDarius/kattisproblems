#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    for(int i = 0; i < c; i++)
    {
        int n, s = 0;
        cin >> n;
        int v[n];
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            s+= v[i];
        }
        double avg = (double) s / n;
        int aavg = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] > avg)
            {
                aavg++;
            }
        }
        cout << fixed << setprecision(3) << (double) aavg / n * 100 << "%" << endl;
    }
    return 0;
}