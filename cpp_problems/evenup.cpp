#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<int> v2;
    int k = 0;
    while(true)
    {
        for(int i = 0; i < v1.size(); i++)
        {
            if((v1[i] + v1[i + 1]) % 2 == 0 && i != v1.size() - 1)
            {
                i++;
            }
            else
            {
                v2.push_back(v1[i]);
            }
        }
        if(k == v2.size())
        {
            cout << v2.size() << endl;
            break;
        }
        else
        {
            v1 = v2;
            k = v1.size();
            v2.clear();
        }
    }
    return 0;
}
