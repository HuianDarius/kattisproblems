#include <bits/stdc++.h>
using namespace std;

int c = 0;

bool check(vector<int> &v, vector<pair<int, int>> &holes)
{
    int last = v.size() - 1;
    for(auto p : holes)
    {
        if(p.first == last && p.second == v[last])
        {
            return false;
        }
    }
    for(int i = 0; i < last; i++)
    {
        if(i - v[i] == last - v[last] || i + v[i] == last + v[last])
        {
            return false;
        }
    }
    return true;
}

void queens(int n, vector<int> &v, vector<pair<int, int>> &holes)
{
    if(n == v.size())
    {
        c++;
        /*for(auto e : v)
        {
            cout << e << " ";
        }
        cout << endl;*/
    }
    for(int i = 0; i < n; i++)
    {
        bool ok = false;
        for(auto e : v)
        {
            if(e == i)
            {
                ok = true;
                break;
            }
        }
        if(!ok)
        {

            v.push_back(i);
            if(check(v, holes))
            {
                queens(n, v, holes);
            }
            v.pop_back();

        }
    }
}

int main()
{
    while(true)
    {
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0)
        {
            return 0;
        }
        c = 0;
        vector<pair<int, int>> holes;
        for(int i = 0; i < m; i++)
        {
            pair<int, int> p;
            cin >> p.first >> p.second;
            holes.push_back(p);
        }
        vector<int> v;
        queens(n, v, holes);
        cout << c << endl;
    }
    return 0;
}