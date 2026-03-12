#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int w = 0, b = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'W')
        {
            w+= 1;
        }
        if(s[i] == 'B')
        {
            b+= 1;
        }
    }
    if(w == b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
