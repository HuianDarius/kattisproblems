#include <bits/stdc++.h>
using namespace std;

int n, m;
int m1[501][501];
bool vis[501][501];

int dirx[4] = {1, -1, 0, 0};
int diry[4] = {0, 0, 1, -1};

int bfs(int x, int y, int m1[501][501], bool vis[501][501])
{
    deque<pair<pair<int, int>, int> > q;
    q.push_back({{x, y}, 0});
    vis[x][y] = true;
    while(!q.empty())
    {
        pair<pair<int, int>, int> pcrt = q.front();
        q.pop_front();
        pair<int, int> crt = pcrt.first;
        for(int i = 0; i < 4; i++)
        {
            int ii = crt.first + dirx[i] * m1[crt.first][crt.second];
            int jj = crt.second + diry[i] * m1[crt.first][crt.second];
            if(ii == n - 1 && jj == m - 1)
            {
                return pcrt.second + 1;
            }
            if(ii >= 0 && ii < n && jj >= 0 && jj < m && vis[ii][jj] == false)
            {
                vis[ii][jj] = true;
                q.push_back({{ii, jj}, pcrt.second + 1});
            }
        }
    }
    return -1;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            m1[i][j] = c - '0';
        }
    }
    int res = bfs(0, 0, m1, vis);
    cout<<res<<endl;
    return 0;
}
