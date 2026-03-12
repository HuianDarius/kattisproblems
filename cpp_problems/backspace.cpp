#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '<' && k > 0)
        {
            k--;
        }
        else
        {
            s[k] = s[i];
            k++;
        }
    }
    for(int i = 0; i < k; i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}
