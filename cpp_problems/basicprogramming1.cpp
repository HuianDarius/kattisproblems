#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t;
    cin >> n >> t;
    long long v[n];
    long long k = 0, k2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        k+= v[i];
        if(v[i] % 2 == 0)
        {
            k2+= v[i];
        }
    }
    if(t == 1)
    {
        cout << 7;
        return 0;
    }
    else if(t == 2)
    {
        if(v[0] > v[1])
        {
            cout << "Bigger";
            return 0;
        }
        else if(v[0] < v[1])
        {
            cout << "Smaller";
            return 0;
        }
        else if(v[0] == v[1])
        {
            cout << "Equal";
            return 0;
        }
    }
    else if(t == 3)
    {
        sort(v, v+3);
        cout << v[1] << endl;
        return 0;
    }
    else if(t == 4)
    {
        cout << k;
        return 0;
    }
    else if(t == 5)
    {
        cout << k2;
        return 0;
    }
    else if(t == 6)
    {
        for(int j = 0; j < n; j++)
        {
            cout << char('a' + v[j] % 26);
        }
        return 0;
    }
    else
    {
        int z = 0, r = 0;
        while(z <= 99999999)
        {
            z++;
            r = v[r];
            if(r > n - 1)
            {
                cout << "Out";
                return 0;
            }
            else if(r == n-1)
            {
                cout << "Done";
                return 0;
            }
        }
        cout << "Cyclic";
        return 0;
    }
    return 0;
}