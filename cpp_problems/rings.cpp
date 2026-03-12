#include <iostream>
#include <bits/stdc++.h>
using namespace ::std;
int parent(int i, vector<int>& uj)
{
    int p = uj[i];
    while (p != i)
    {
        i = p;
        p = uj[i];
    }
    return p;
}
void join(int i, int j, vector<int>& uj)
{
    int pi = parent(i, uj);
    int pj = parent(j, uj);
    if (pi != pj)
    {
        uj[pj] = pi;
    }
}
struct circle
{
    double x, y, r;
};
bool intersect(circle& c1, circle& c2)
{
    double dist =
        sqrt((c1.x - c2.x) * (c1.x - c2.x) + (c1.y - c2.y) * (c1.y - c2.y));
    return (abs(c1.r - c2.r) <= dist && dist <= c1.r + c2.r);
}
int main()
{
    int n;
    cin >> n;
    while (n != -1)
    {
        vector<circle> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i].x >> c[i].y >> c[i].r;
        }
        vector<int> u(n);
        for (int i = 0; i < u.size(); i++)
        {
            u[i] = i;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (intersect(c[i], c[j]))
                {
                    join(i, j, u);
                }
            }
        }
        vector<int> cnt(n, 0);
        for (int i = 0; i < n; i++)
        {
            cnt[parent(i, u)] += 1;
        }
        int mx = cnt[0];
        for (int i = 1; i < n; i++)
        {
            mx = max(cnt[i], mx);
        }
        cout << "The largest component contains " << mx << " ring";
        if (mx != 1)
        {
            cout << "s";
        }
        cout << "." << endl;

        cin >> n;
    }
}
