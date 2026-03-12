#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9, s = 0, v[10], i, j;
    for(i = 0; i < n; i++)
    {
        cin >> v[i];
        s+= v[i];
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 1; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }
            if(s - v[i] - v[j] == 100)
            {
                goto end;
            }
        }
    }
end:
    for(int k = 0; k < n; k++)
    {
        if(k != i && k != j)
        {
            cout << v[k] << '\n';
        }
    }
    return 0;
}