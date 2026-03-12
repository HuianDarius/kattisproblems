#include <bits/stdc++.h>
using namespace ::std;
vector<string> dnc;
vector<bool> used;
int res = 1e9;
void solve(int pos, int n, int cost, vector<int> &sol)
{
    if (pos == n)
    {
        res = min(res, cost);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!used[i])
        {
            used[i] = true;
            sol.push_back(i);
            int ch = 0;
            if (pos > 0)
            {
                for (auto c1 : dnc[sol[pos]])
                {
                    for (auto c2 : dnc[sol[pos - 1]])
                    {
                        if (c1 == c2)
                        {
                            ch++;
                        }
                    }
                }
            }
            if (cost + ch < res)
            {
                solve(pos + 1, n, cost + ch, sol);
            }
            sol.pop_back();
            used[i] = false;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string crt;
        cin >> crt;
        dnc.push_back(crt);
        used.push_back(false);
    }
    vector<int> sol;
    solve(0, n, 0, sol);
    cout << res << endl;
    return 0;
}