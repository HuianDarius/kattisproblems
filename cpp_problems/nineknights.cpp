#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    int y[8] = {1, -1, 1, -1, 2, -2, 2, -2};
    vector<string> d(5);
    for(int i = 0; i < 5; i++)
    {
        cin >> d[i];
    }
    int c =0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(d[i][j] == 'k')
            {
                c++;
                for(int p=0; p<8; p++)
                {
                    if(i+x[p] >=0 && i+x[p] <5 && j+y[p] >=0 && j+y[p] <5 )
                    {
                        if(d[i+x[p]][j+y[p]] =='k')
                        {
                            cout << "invalid" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    if(c != 9)
    {
        cout << "invalid" << endl;
    }
    else
    {
        cout << "valid" << endl;
    }
    return 0;
}