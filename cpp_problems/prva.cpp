#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<char>> v;
    v.resize(m, vector<char>(n));

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<string> cuvinte;

    string cuvant = "";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v[i][j] == '#')
            {
                cuvinte.push_back(cuvant);
                cuvant = "";
            }
            else
            {
                cuvant.push_back(v[i][j]);
            }
        }
        cuvinte.push_back(cuvant);
        cuvant = "";
    }

    cuvant = "";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(v[j][i] == '#')
            {
                cuvinte.push_back(cuvant);
                cuvant = "";
            }
            else
            {
                cuvant.push_back(v[j][i]);
            }
        }
        cuvinte.push_back(cuvant);
        cuvant = "";
    }

    vector<string> ok;
    for(auto a : cuvinte)
    {
        if(a.length() > 1)
        {
            ok.push_back(a);
        }
    }

    sort(ok.begin(), ok.end());

    cout << ok[0] << endl;
    return 0;
}