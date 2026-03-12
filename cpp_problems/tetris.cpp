#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long c, p;
    cin >> c >> p;
    vector<long long> v(c);
    for(long long i = 0; i < c; i++)
    {
        cin >> v[i];
    }
    long long res = 0;
    if(p == 1)
    {
        res = c;
        for(long long i = 0; i < c - 3; i++)
        {
            if(v[i] == v[i + 1] && v[i+1] == v[i+2] && v[i + 2] == v[i + 3])
            {
                res+= 1;
            }
        }
    }
    else if(p == 2)
    {
        for(long long i = 0; i < c - 1; i++)
        {
            if(v[i] == v[i + 1])
            {
                res+= 1;
            }
        }
    }
    else if(p == 3)
    {
        for(long long i = 0; i < c - 2; i++)
        {
            if(v[i] == v[i + 1] && v[i + 1] == v[i + 2] - 1)
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 1; i++)
        {

            if(v[i] - 1 == v[i + 1])
            {
                res+= 1;
            }
        }
    }
    else if(p == 4)
    {
        for(long long i = 0; i < c - 2; i++)
        {
            if(v[i] - 1 == v[i + 1] && v[i + 1] == v[i + 2])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 1; i++)
        {
            if(v[i] == v[i + 1] -1)
            {
                res+= 1;
            }
        }
    }
    else if(p == 5)
    {
        for(long long i = 0; i < c - 2; i++)
        {
            if(v[i] == v[i + 1] && v[i + 1] == v[i + 2])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 2; i++)
        {
            if(v[i] == v[i + 1] + 1 && v[i + 1] + 1 == v[i + 2])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 1 ; i++)
        {
            if(v[i] - 1 == v[i + 1])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 1; i++)
        {
            if(v[i] == v[i + 1] - 1)
            {
                res+= 1;
            }
        }
    }
    else if(p == 6)
    {
        for(long long i = 0; i < c - 2; i++)
        {
            if(v[i] + 1 == v[i + 1] && v[i + 1] == v[i + 2])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 2; i++)
        {
            if(v[i] == v[i + 1] && v[i + 1] == v[i + 2])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 1; i++)
        {
            if(v[i] == v[i + 1])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 1; i++)
        {
            if(v[i] - 2 == v[i + 1])
            {
                res+= 1;
            }
        }
    }
    else if(p == 7)
    {
        for(long long i = 0; i < c - 2; i++)
        {
            if(v[i] == v[i + 1] && v[i + 1] == v[i + 2])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 2; i++)
        {
            if(v[i] == v[i + 1] && v[i + 1] == v[i + 2] + 1)
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 1; i++)
        {
            if(v[i] == v[i + 1])
            {
                res+= 1;
            }
        }
        for(long long i = 0; i < c - 1; i++)
        {
            if(v[i] == v[i + 1] - 2)
            {
                res+= 1;
            }
        }

    }
    cout << res << endl;
    return 0;
}