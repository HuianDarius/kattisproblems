#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int a = 1;
    int start = 0;
    for(int i = 1; i < n; i++)
    {
        if(v[i] == v[i - 1] + 1)
        {
            a++;
        }
        else
        {
            if(a <= 2)
            {
                for(int j = start; j < start + a; j++)
                {
                    cout << v[j] << " ";
                }
            }
            else
            {
                cout << v[start] << "-" << v[start + a - 1] << " ";
            }
            start = i;
            a = 1;
        }

    }
    if(a <= 2)
    {
        for(int j = start; j < start + a; j++)
        {
            cout << v[j] << " ";
        }
    }
    else
    {
        cout << v[start] << "-" << v[start + a - 1] << " ";
    }
    return 0;
}