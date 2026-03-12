#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct team
{
    int id;
    int s, p, t, o;
};

bool cmp(team &t1, team &t2)
{
    if(t1.s != t2.s)
    {
        return t1.s < t2.s;
    }
    if(t1.p != t2.p)
    {
        return t1.p >= t2.p;
    }
    if(t1.t != t2.t)
    {
        return t1.t >= t2.t;
    }
    return false;
}

bool eq(team &t1, team & t2)
{
    if(t1.s == t2.s && t1.p == t2.p && t1.t == t2.t)
    {
        return true;
    }
    return false;
}

int main()
{
    vector<int> points{100, 75, 60, 50, 45, 40, 36, 32, 29, 26, 24, 22, 20, 18, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n;
    cin >> n;
    vector<team> teams(n);
    for(int i = 0; i < n; i++)
    {
        cin >> teams[i].s >> teams[i].p >> teams[i].t >> teams[i].o;
        teams[i].id = i;
    }
    sort(teams.begin(), teams.end(), &cmp);
    reverse(teams.begin(), teams.end());
    int st = 0, en = 0, i = 1;
    vector<int> p(n, 0);
    while(i < n)
    {
        if(eq(teams[i], teams[st]))
        {
            en++;
        }
        else
        {
            int tpoints = 0;
            for(int j = st; j <= en; j++)
            {
                if(j < points.size())
                {
                    tpoints+= points[j];
                }
            }
            int pt = ceil(tpoints / (en - st + 1.0));
            for(int j = st; j <= en; j++)
            {
                p[teams[j].id] = pt + teams[j].o;
            }
            st = i;
            en = i;
        }
        i++;
    }
    if(st < n)
    {
        int tpoints = 0;
        for(int j = st; j <= en; j++)
        {
            if(j < points.size())
            {
                tpoints+= points[j];
            }
            else
            {
                break;
            }
        }
        int pt = ceil(tpoints / (en - st + 1.0));
        for(int j = st; j <= en; j++)
        {
            p[teams[j].id] = pt + teams[j].o;
        }
    }
    for(auto i : p)
    {
        cout << i << endl;
    }
    return 0;
}