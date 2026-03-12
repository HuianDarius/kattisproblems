#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[1000][1000];
int b[1000][1000];
int dirx[] = {1, -1, 0, 0};
int diry[] = {0, 0, 1, -1};
void dfs(int r, int c, int x, int y, int col, int val)
{
    b[x][y] = col;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dirx[i];
        int yy = y + diry[i];
        if (xx >= 0 && yy >= 0 && xx < r && yy < c && a[xx][yy] == val && b[xx][yy] == -1)
        {
            dfs(r, c, xx, yy, col, val);
        }
    }
}
int main()
{
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char cr;
            cin >> cr;
            a[i][j] = cr - '0';
            b[i][j] = -1;
        }
    }

    int col = 2;
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (b[i][j] == -1)
            {
                dfs(r, c, i, j, col, a[i][j]);
                col++;
            }
        }
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--, x2--, y1--, y2--;
        if((a[x1][y1] != a[x2][y2]) || (b[x1][y1] != b[x2][y2]))
    {
        cout << "neither" << endl;
    }
    else
    {
        if(a[x1][y1] == 1)
            {
                cout << "decimal" << endl;
            }
            else
            {
                cout << "binary" << endl;
            }
        }
    }
    return 0;
}
