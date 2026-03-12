#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        vector<string>v;
        for(int j=0; j<a; j++)
        {
            string p;
            cin>>p;
            v.push_back(p);
        }
        vector<double>u;
        u.resize(b,0);
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<b; k++)
            {
                u[k]+=v[j][k]-'0';
            }
        }
        for(int j=0; j<b; j++)
        {
            u[j]/=a;
        }
        for(auto c:u)
        {
            if(c <0.5)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
        }
        cout<<endl;
    }
    return 0;
}