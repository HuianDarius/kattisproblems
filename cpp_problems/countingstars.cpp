#include <bits/stdc++.h>
using namespace std;

int n, m;
int m1[101][101];
bool vis[101][101];

int dirx[4] = {1, -1, 0, 0};
int diry[4] = {0, 0, 1, -1};

void solve(int x, int y, int m1[101][101], bool vis[101][101])
{
    deque<pair<int, int> > q;
    q.push_back({x, y});
    vis[x][y] = true;
    while(!q.empty())
    {
        pair<int, int> crt = q.front();
        q.pop_front();
        for(int i = 0; i < 4; i++)
        {
            int x1 = crt.first + dirx[i];
            int y1 = crt.second + diry[i];
            if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m)
            {
                if(!vis[x1][y1] && m1[x1][y1]==1)
                {
                    vis[x1][y1] = true;
                    q.push_back({x1, y1});
                }
            }
        }
    }
}

int main()
{
    int z = 1;
    while(cin >> n >> m)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                char c;
                cin >> c;
                if(c == '-')
                {
                    m1[i][j] = 1;
                }
                else
                {
                    m1[i][j] = 0;
                }
                vis[i][j] = false;
            }
        }
        int sol = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(m1[i][j] == 1 && !vis[i][j])
                {
                    solve(i, j, m1, vis);
                    sol++;
                }

            }
        }
        cout << "Case " << z << ": " << sol << endl;
        z++;
    }
    return 0;
}
