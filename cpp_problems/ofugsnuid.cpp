#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    vector<int> v(1000001, 0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int j = n - 1; j >= 0;  j--)
    {
        cout << v[j] << endl;
    }
    return 0;
}