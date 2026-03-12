#include <bits/stdc++.h>
using namespace std;
using d6 =long double;
using i6 =int64_t;
using p6 = pair<d6,d6>;

const d6 EPS = 1/100000000.0;
const d6 NINF = -1e25;

struct intv
{
    d6 left;
    d6 right;
    i6 id;
} z;

bool cmp(const p6& p1, const p6& p2)
{
    if(abs(p1.first - p2.first) < EPS)
    {
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}

int main()
{
    d6 left, right;
    i6 n;
    while(cin >> left >> right)
    {
        cin >> n;
        vector<p6> v(n);
        for(i6 i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
            z.left = v[i].first;
            z.right = v[i].second;
            z.id = i;
        }
        sort(v.begin(), v.end(), &cmp);
        int res =0;
        double covered = left;
        for(i6 i = 0; i < n; i++)
        {
            if(v[i].second + EPS < covered)
            {
                continue;
            }
            if(v[i].first < covered + EPS)
            {
                double max_r = NINF;
                i6 nxid;
                for(int j = i; (j < n) && (v[j].first < covered + EPS); j++)
                {
                    if(v[j].second > max_r)
                    {
                        max_r = v[j].second;
                        nxid = j;
                    }
                }
                if(max_r > NINF)
                {
                    covered = max_r;
                    res++;
                    if(right < covered + EPS)
                    {
                        break;
                    }
                    i = nxid;
                }
                else
                {
                    res=-1;
                    break;
                }
            }
            else
            {
                res =-1;
                break;
            }
        }
        if(covered + EPS <= right)
        {
            res =-1;
        }
        if(res==-1)
        {
            cout << "impossible" << endl;
        }
        else
        {
            cout << res << endl;
            for(i6 i = 0; i < res; i++)
            {
                cout << z.id[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}