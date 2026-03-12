#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    vector<char> v;
    bool ok = true;
    cin >> l;
    cin >> noskipws;
    int pos = -1;
    char wrc;
    char c;
    int i = 0;
    while(cin >> c)
    {
        i++;
        if(c == ' ')
        {
            continue;
        }

        if(c == '{' || c == '[' || c =='(')
        {
            v.push_back(c);
        }
        else
        {
            if(c == ')')
            {
                if(v.empty() == false && v.back() == '(')
                {
                    v.pop_back();
                }
                else
                {
                    ok = false;
                    pos = i;
                    wrc = ')';
                    break;
                }
            }
            if(c == ']')
            {
                if(v.empty() == false && v.back() == '[')
                {
                    v.pop_back();
                }
                else
                {
                    ok = false;
                    pos = i;
                    wrc = ']';
                    break;
                }
            }
            if(c == '}')
            {
                if(v.empty() == false && v.back() == '{')
                {
                    v.pop_back();
                }
                else
                {
                    ok = false;
                    pos = i;
                    wrc = '}';
                    break;
                }
            }
        }
    }
    if(ok == true)
    {
        cout << "ok so far";
    }
    else
    {
        cout << wrc << " " << pos - 2;
    }
    return 0;
}