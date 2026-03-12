#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        stack<char> elements;
        bool ok = true;
        for(char c : s)
        {
            if(c == '$' || c == '|' || c == '*')
            {
                elements.push(c);
            }
            else if(c == 't')
            {
                if(elements.empty() || elements.top() != '|')
                {
                    ok = false;
                    break;
                }
                elements.pop();
            }
            else if(c == 'j')
            {
                if(elements.empty() || elements.top() != '*')
                {
                    ok = false;
                    break;
                }
                elements.pop();
            }
            else if(c == 'b')
            {
                if(elements.empty() || elements.top() != '$')
                {
                    ok = false;
                    break;
                }
                elements.pop();
            }
        }
        if(ok && elements.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}