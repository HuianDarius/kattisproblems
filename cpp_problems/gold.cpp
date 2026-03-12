#include <bits/stdc++.h>
using namespace std;

char mp[64][64];
bool vis[64][64];
int l, c;
pair<int, int> start;

int dirx[4] = {1, -1, 0, 0};
int diry[4] = {0, 0, 1, -1};

int bfs()
{
    deque<pair<int, int> > q;
    q.push_back(start);
    vis[start.first][start.second] = true;
    int res =0;
    while(!q.empty())
    {
        pair<int, int> crt = q.front();
        q.pop_front();
        bool trap = false;
        for(int i = 0; i < 4; i++)
        {
            int xx = crt.first + dirx[i];
            int yy = crt.second + diry[i];
            if(xx >= 0 && xx < l && yy >= 0 && yy < c && mp[xx][yy] == 'T')
            {
                trap = true;
                break;
            }
        }

        if(!trap)
        {
            for(int i = 0; i < 4; i++)
            {
                int xx = crt.first + dirx[i];
                int yy = crt.second + diry[i];
                if(xx >= 0 && xx < l && yy >= 0 && yy < c && !vis[xx][yy])
                {
                    if(mp[xx][yy] == 'G')
                    {
                        res+= 1;
                    }
                    if(mp[xx][yy] != '#')
                    {
                        vis[xx][yy] = true;
                        q.push_back({xx, yy});
                    }
                }
            }
        }
    }
    return res;
}

int main()
{
    cin >> c >> l;
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> mp[i][j];
            if(mp[i][j] == 'P')
            {
                start = {i, j};
            }
        }
    }
    cout << bfs() << endl;
    return 0;
}
