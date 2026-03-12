#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool *count = new bool[n];
    memset(count, 0, n *sizeof(bool));
    while(m--)
    {
        int c;
        cin >> c;
        count[c] = true;
    }
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        if(count[i])
        {
            k++;
            continue;
        }
        cout << i << endl;
    }
    cout << "Mario got " << k << " of the dangerous obstacles." << endl;
    delete[] count;
}