#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,x;
    vector<int> v;
    cin >> n >> k;
    for (int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back (x);
    }
    for (int i=0; i<n; i++)
    {
       if ((i+1)%k==0)
       {
           cout << v[i]<< " "<< endl;
       }


    }


    return 0;
}
