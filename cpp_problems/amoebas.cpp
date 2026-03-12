#include <bits/stdc++.h>
using namespace std;

int n, m;

int dirx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int diry[] = {1, -1, 0, 1, -1, 0, 1, -1};

void solve(int x, int y, int m1[101][101], bool vis[101][101])
{
    deque<pair<int, int>> q;
    q.push_back({x, y});
    vis[x][y] = true;
    while(!q.empty())
    {
        pair<int, int> crt = q.front();
        q.pop_front();
        for(int i = 0; i < 8; i++)
        {
            int xi = crt.first + dirx[i];
            int yj = crt.second + diry[i];
            if(xi >= 0 && xi < n && yj >= 0 && yj < m)
            {
                if(vis[xi][yj] == false && m1[xi][yj] == 1)
                {
                    vis[xi][yj] = true;
                    q.push_back({xi, yj});
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int m1[101][101];
    bool vis[101][101];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            vis[i][j] = false;
            if(c == '#')
            {
                m1[i][j] = 1;
            }
            else
            {
                m1[i][j] = 0;
            }
        }
    }
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(m1[i][j] == 1 && vis[i][j] == false)
            {
                solve(i, j, m1, vis);
                s++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
