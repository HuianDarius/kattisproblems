#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, sum = 0;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+= v[i];
    }
    if(sum <= x)
    {
        cout << "Jebb" << endl;
    }
    else
    {
        cout << "Neibb" << endl;
    }
    return 0;
}