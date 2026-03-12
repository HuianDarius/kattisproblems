#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == -1)
        {
            break;
        }
        if(n == 1 && n == 0)
        {
            cout << 0;
            break;
        }
        int m[n][n];
        vector<int> res;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        for(int i = 0; i < n; i++)
        {
            bool weak = true;
            for(int j1 = 0; j1 < n && weak; j1++)
            {
                if(m[i][j1] == 1)
                {
                    for(int j2 = 0; j2 < n && weak; j2++)
                    {
                        if(m[i][j2] == 1)
                        {
                            if(m[j1][j2] ==1)
                            {
                                weak = false;
                                break;
                            }
                        }
                    }
                }
            }
            if(weak)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}