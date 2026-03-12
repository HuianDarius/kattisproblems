#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s, s1, s2;
        int c;
        cin >> s >> s1 >> s2 >> c;
        if(s1 >= "2010/00/00")
        {
            cout << s << " eligible" << endl;
            continue;
        }
        if(s2 >= "1991/00/00")
        {
            cout << s << " eligible" << endl;
            continue;
        }
        if(c > 40)
        {
            cout << s << " ineligible" << endl;
            continue;
        }
        cout << s << " coach petitions" << endl;
    }
    return 0;
}